#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s, w;

    getline(cin, s);  
    cin >> w;         

    // transform(s.begin(), s.end(), s.begin(), ::tolower);
    // transform(w.begin(), w.end(), w.begin(), ::tolower);

    if (s.find(w) != string::npos) {
        cout << "The word '" << w << "' is present in the sentence." << endl;
    } else {
        cout << "The word '" << w << "' is not present in the sentence." << endl;
    }

    return 0;
}
