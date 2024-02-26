#include <iostream>
#include <string>
using namespace std;

int f(string s, char *first, char *last) {
    *first = s[0];
    *last = s[s.size() - 1];
    int tno = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 't') tno++;
    }
    return tno;
}

int main() {
    string s;
    cin >> s;
    char first[1];
    char last[1];
    int tsize = f(s, first, last);
    cout << *first <<" ";
    cout << *last << " ";
    cout << tsize;
    return 0;
}
