#include <iostream>
#include <string>

using namespace std;

// Define the structure of a node in the linked list
struct Node {
    string sessionTitle;
    Node* next;

    Node(const string& title)  {
        this->sessionTitle=title;
        this->next = NULL;
    }
};

// Define the class for managing the schedule
class ScheduleManager {
private:
    Node* head;

public:
    ScheduleManager(){
        head = NULL;
    }

    // Function to insert a new session into the schedule at a specified position
    void insertSession(const string& sessionTitle, int position) {
        Node* newNode = new Node(sessionTitle);
        if (position == 0 || head == nullptr) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;
            for (int i = 0; i < position - 1 && current->next != nullptr; ++i) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    // Function to delete a session from the schedule
    void deleteSession(const string& sessionTitle) {
        if (head == nullptr) return;

        if (head->sessionTitle == sessionTitle) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        while (current->next != nullptr && current->next->sessionTitle != sessionTitle) {
            current = current->next;
        }

        if (current->next != nullptr) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }

    // Function to display the final schedule
    void displaySchedule() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->sessionTitle << " -> ";
            current = current->next;
        }
        cout << "END" << endl;
    }
};

int main() {
    // Test the ScheduleManager class
    ScheduleManager manager;

    // Initial schedule
    manager.insertSession("Session 1", 0);
    manager.insertSession("Session 2", 1);
    manager.insertSession("Session 3", 2);
    manager.insertSession("Session 4", 3);

    cout << "Initial Schedule:" << endl;
    manager.displaySchedule();

    // Add new session
    manager.insertSession("Emerging Tech Trends", 2);

    cout << "\nSchedule after adding 'Emerging Tech Trends':" << endl;
    manager.displaySchedule();

    // Cancel a session
    manager.deleteSession("Introduction to Quantum Computing");

    cout << "\nFinal Schedule:" << endl;
    manager.displaySchedule();

    return 0;
}
