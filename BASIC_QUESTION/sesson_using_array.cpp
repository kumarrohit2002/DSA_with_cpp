#include <iostream>
#include <string>
using namespace std;

const int MAX_SESSIONS = 100; 

class ScheduleManager {
    string sessions[MAX_SESSIONS];
    int numSessions;
    public:
        // Constructor
        ScheduleManager(){
            numSessions = 0;
        }

    // Function to insert a session into the schedule
    void insertSession(const string& sessionTitle, int position) {
        if (position < 0 || position > numSessions) {
            cout << "Invalid position." << endl;
            return;
        }
        if (numSessions >= MAX_SESSIONS) {
            cout << "Schedule is full. Cannot insert more sessions." << endl;
            return;
        }
        for (int i = numSessions; i > position; --i) {
            sessions[i] = sessions[i - 1];
        }
        sessions[position] = sessionTitle;
        ++numSessions;
    }

    // Function to delete a session from the schedule
    void deleteSession(const string& sessionTitle) {
        int index = -1;
        for (int i = 0; i < numSessions; ++i) {
            if (sessions[i] == sessionTitle) {
                index = i;
                break;
            }
        }
        if (index == -1) {
            cout << "Session not found." << endl;
            return;
        }
        for (int i = index; i < numSessions - 1; ++i) {
            sessions[i] = sessions[i + 1];
        }
        --numSessions;
    }

    // Function to display 
    void displaySchedule() {
        cout << "Schedule:" << endl;
        for (int i = 0; i < numSessions; ++i) {
            cout << i + 1 << ". " << sessions[i] << endl;
        }
    }
};

int main() {
    // object
    ScheduleManager manager;

    // Add sessions to the schedule
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

    // delete a session
    manager.deleteSession("Session 2");

    cout << "\nFinal Schedule:" << endl;
    manager.displaySchedule();

    return 0;
}
