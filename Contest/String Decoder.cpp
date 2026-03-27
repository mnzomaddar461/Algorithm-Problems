#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        string s;
        cin >> s;
        pair<char, int> val;
        for (int i = 0; i < s.length(); i += 2) {
            val.first = s[i];
            val.second = s[i + 1] - '0';
            for (int j = 0; j < val.second; j++) {
                cout << val.first;
            }
        }
        cout << endl;
    }
    
    return 0;
}