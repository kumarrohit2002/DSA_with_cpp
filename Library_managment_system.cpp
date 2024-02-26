#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <ctime>
using namespace std;

#define MAX_BOOKS 200
#define MAX_STUDENTS 200

class Login {
private:
    string username;
    string password;

public:
    bool authenticate();
};

class Book {
private:
    int bookId;
    string bookTitle;
    bool isCheckedOut;
    string dueDate;

public:
    void addBook();
    void searchBook();
    void issueBook();
    void returnBook();
    void listAllBooks();
    void deleteBook();
    void sortBooks();
    int binarySearch(int arr[], int left, int right, int target);
};

class Student {
private:
    int studentId;
    string studentName;
    int borrowedBooks[MAX_BOOKS];
    int numBooksBorrowed;

public:
    void addStudent();
    void displayStudent();
    void listAllStudents();
};

bool Login::authenticate() {
    cout << "----------------------" << endl;
    cout << "Login" << endl;
    cout << "Username: ";
    cin >> username;
    cout << "Password: ";
    cin >> password;
    cout << "----------------------" << endl;

    return true;
}

void Book::addBook() {
    cout << "----------------------" << endl;
    cout << "Enter the book ID: ";
    cin >> bookId;
    cout << "Enter the book title: ";
    cin.ignore();
    getline(cin, bookTitle);

    fstream bookFile("books.txt", ios::app);
    bookFile << bookId << " " << bookTitle << " 0" << endl;
    bookFile.close();

    cout << "----------------------" << endl;
    cout << "Book added successfully!" << endl;
    cout << "----------------------" << endl;
}

void Book::searchBook() {
    cout << "----------------------" << endl;
    cout << "Enter the book ID to search: ";
    int searchId;
    cin >> searchId;

    ifstream bookFile("books.txt");
    string line;
    bool found = false;

    while (getline(bookFile, line)) {
        stringstream ss(line);
        int id;
        string title;
        bool isCheckedOut;

        ss >> id >> title >> isCheckedOut;
        if (id == searchId) {
            found = true;
            cout << "----------------------" << endl;
            cout << "Book ID: " << id << endl;
            cout << "Book Title: " << title << endl;
            cout << "Status: " << (isCheckedOut ? "Checked Out" : "Available") << endl;
            cout << "----------------------" << endl;
            break;
        }
    }

    if (!found) {
        cout << "----------------------" << endl;
        cout << "Book not found!" << endl;
        cout << "----------------------" << endl;
    }

    bookFile.close();
}

void Book::issueBook() {
    cout << "----------------------" << endl;
    cout << "Enter the book ID to issue: ";
    int issueId;
    cin >> issueId;

    fstream bookFile("books.txt", ios::in | ios::out);
    string line;
    bool found = false;

    while (getline(bookFile, line)) {
        stringstream ss(line);
        int id;
        string title;
        bool isCheckedOut;
        string dueDate;

        ss >> id >> title >> isCheckedOut >> dueDate;
        if (id == issueId) {
            found = true;
            if (isCheckedOut) {
                cout << "----------------------" << endl;
                cout << "Book already checked out!" << endl;
                cout << "----------------------" << endl;
                break;
            } else {
                time_t now = time(0);
                struct tm* ltm = localtime(&now);
                char dueDateBuffer[11];
                strftime(dueDateBuffer, sizeof(dueDateBuffer), "%d/%m/%Y", ltm);
                string dueDate = dueDateBuffer;

                ss.seekp(-10, ios::cur);
                ss << "1 " << dueDate;
                bookFile.seekp(bookFile.tellg() - line.length() - 1);
                bookFile << ss.str();
                bookFile.close();

                cout << "----------------------" << endl;
                cout << "Book checked out successfully!" << endl;
                cout << "Due Date: " << dueDate << endl;
                cout << "----------------------" << endl;
            }
            break;
        }
    }

    if (!found) {
        cout << "----------------------" << endl;
        cout << "Book not found!" << endl;
        cout << "----------------------" << endl;
    }

    bookFile.close();
}

void Book::returnBook() {
    cout << "----------------------" << endl;
    cout << "Enter the book ID to return: ";
    int returnId;
    cin >> returnId;

    fstream bookFile("books.txt", ios::in | ios::out);
    string line;
    bool found = false;

    while (getline(bookFile, line)) {
        stringstream ss(line);
        int id;
        string title;
        bool isCheckedOut;
        string dueDate;

        ss >> id >> title >> isCheckedOut >> dueDate;
        if (id == returnId) {
            found = true;
            if (!isCheckedOut) {
                cout << "----------------------" << endl;
                cout << "Book is not checked out!" << endl;
                cout << "----------------------" << endl;
                break;
            } else {
                ss.seekp(-10, ios::cur);
                ss << "0          ";
                bookFile.seekp(bookFile.tellg() - line.length() - 1);
                bookFile << ss.str();
                bookFile.close();

                cout << "----------------------" << endl;
                cout << "Book returned successfully!" << endl;
                cout << "----------------------" << endl;
            }
            break;
        }
    }

    if (!found) {
        cout << "----------------------" << endl;
        cout << "Book not found!" << endl;
        cout << "----------------------" << endl;
    }

    bookFile.close();
}

void Book::listAllBooks() {
    cout << "----------------------" << endl;
    cout << "List of all books:" << endl;

    ifstream bookFile("books.txt");
    string line;

    while (getline(bookFile, line)) {
        stringstream ss(line);
        int id;
        string title;
        bool isCheckedOut;
        string dueDate;

        ss >> id >> title >> isCheckedOut >> dueDate;
        cout << "Book ID: " << id << ", Title: " << title << ", Status: " << (isCheckedOut ? "Checked Out" : "Available") << endl;
    }

    cout << "----------------------" << endl;

    bookFile.close();
}

void Book::deleteBook() {
    cout << "----------------------" << endl;
    cout << "Enter the book ID to delete: ";
    int deleteId;
    cin >> deleteId;

    ifstream bookFileIn("books.txt");
    ofstream bookFileOut("temp.txt");
    string line;
    bool found = false;

    while (getline(bookFileIn, line)) {
        stringstream ss(line);
        int id;
        string title;
        bool isCheckedOut;
        string dueDate;

        ss >> id >> title >> isCheckedOut >> dueDate;
        if (id == deleteId) {
            found = true;
        } else {
            bookFileOut << line << endl;
        }
    }

    bookFileIn.close();
    bookFileOut.close();

    if (found) {
        remove("books.txt");
        rename("temp.txt", "books.txt");

        cout << "----------------------" << endl;
        cout << "Book deleted successfully!" << endl;
        cout << "----------------------" << endl;
    } else {
        remove("temp.txt");

        cout << "----------------------" << endl;
        cout << "Book not found!" << endl;
        cout << "----------------------" << endl;
    }
}

void Book::sortBooks() {
    ifstream bookFileIn("books.txt");
    string line;
    int numBooks = 0;
    int bookIds[MAX_BOOKS];

    while (getline(bookFileIn, line)) {
        stringstream ss(line);
        int id;
        string title;
        bool isCheckedOut;

        ss >> id >> title >> isCheckedOut;
        bookIds[numBooks] = id;
        numBooks++;
    }

    bookFileIn.close();

    for (int i = 0; i < numBooks - 1; i++) {
        for (int j = 0; j < numBooks - i - 1; j++) {
            if (bookIds[j] > bookIds[j + 1]) {
                int temp = bookIds[j];
                bookIds[j] = bookIds[j + 1];
                bookIds[j + 1] = temp;
            }
        }
    }

    cout << "----------------------" << endl;
    cout << "Books sorted by ID:" << endl;

    ifstream bookFile("books.txt");

    while (getline(bookFile, line)) {
        stringstream ss(line);
        int id;
        string title;
        bool isCheckedOut;

        ss >> id >> title >> isCheckedOut;
        int index = binarySearch(bookIds, 0, numBooks - 1, id);
        cout << "Book ID: " << id << ", Title: " << title << ", Status: " << (isCheckedOut ? "Checked Out" : "Available") << ", Index: " << index << endl;
    }

    cout << "----------------------" << endl;

    bookFile.close();
}

int Book::binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

void Student::addStudent() {
    cout << "----------------------" << endl;
    cout << "Enter the student ID: ";
    cin >> studentId;
    cout << "Enter the student name: ";
    cin.ignore();
    getline(cin, studentName);

    numBooksBorrowed = 0;

    cout << "----------------------" << endl;
    cout << "Student added successfully!" << endl;
    cout << "----------------------" << endl;
}

void Student::displayStudent() {
    cout << "----------------------" << endl;
    cout << "Student ID: " << studentId << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Books Borrowed: " << numBooksBorrowed << endl;
    cout << "----------------------" << endl;
}

void Student::listAllStudents() {
    cout << "----------------------" << endl;
    cout << "List of all students:" << endl;

    ifstream studentFile("students.txt");
    string line;

    while (getline(studentFile, line)) {
        stringstream ss(line);
        int id;
        string name;

        ss >> id >> name;
        cout << "Student ID: " << id << ", Name: " << name << endl;
    }

    cout << "----------------------" << endl;

    studentFile.close();
}

void initializeData() {
    ofstream bookFile("books.txt");
    for (int i = 1; i <= 20; i++) {
        bookFile << i << " Book" << i << " 0" << endl;
    }
    bookFile.close();

    ofstream studentFile("students.txt");
    for (int i = 1; i <= 20; i++) {
        studentFile << i << " Student" << i << endl;
    }
    studentFile.close();
}

int main() {
    initializeData();

    Login login;
    if (login.authenticate()) {
        int choice;
        Book book;
        Student student;

        do {
            cout << "----------------------" << endl;
            cout << "1: Add New Book" << endl;
            cout << "2: Search for a Book" << endl;
            cout << "3: Issue a Book" << endl;
            cout << "4: Return a Book" << endl;
            cout << "5: List All Books" << endl;
            cout << "6: Delete a Book" << endl;
            cout << "7: Sort Books by ID" << endl;
            cout << "8: Add New Student" << endl;
            cout << "9: Display Student" << endl;
            cout << "10: List All Students" << endl;
            cout << "11: Exit" << endl;
            cout << "----------------------" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
            cout << "----------------------" << endl;

            switch (choice) {
                case 1:
                    book.addBook();
                    break;
                case 2:
                    book.searchBook();
                    break;
                case 3:
                    book.issueBook();
                    break;
                case 4:
                    book.returnBook();
                    break;
                case 5:
                    book.listAllBooks();
                    break;
                case 6:
                    book.deleteBook();
                    break;
                case 7:
                    book.sortBooks();
                    break;
                case 8:
                    student.addStudent();
                    break;
                case 9:
                    student.displayStudent();
                    break;
                case 10:
                    student.listAllStudents();
                    break;
                case 11:
                    cout << "Exiting the program..." << endl;
                    break;
                default:
                    cout << "Invalid choice!" << endl;
                    break;
            }
        } while (choice != 11);
    } else {
        cout << "Login failed. Exiting the program..." << endl;
    }

    return 0;
}
