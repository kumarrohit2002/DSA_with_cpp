#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) { }
    Time operator-(const Time& other) {
        int h_diff = hours - other.hours;
        int m_diff = minutes - other.minutes;
        int s_diff = seconds - other.seconds;

        if (s_diff < 0) {
            s_diff += 60;
            m_diff--;
        }

        if (m_diff < 0) {
            m_diff += 60;
            h_diff--;
        }

        return Time(h_diff, m_diff, s_diff);
    }

    void displayTime() {
        cout << hours << "h " << minutes << "m " << seconds << "s";
    }
};

int main() {
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;

    Time t1(h1, m1, s1);
    Time t2(h2, m2, s2);

    cout << "Time 1: ";
    t1.displayTime();
    cout << endl;

    cout << "Time 2: ";
    t2.displayTime();
    cout << endl;

    Time diff = t1 - t2;

    cout << "Time difference: ";
    diff.displayTime();
    cout << endl;

    return 0;
}
