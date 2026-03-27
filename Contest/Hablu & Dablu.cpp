#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n, h;
    if (!(cin >> n >> h)) return 0;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());

    long long bullets_fired = 0;
    bool hablu_wins = true;

    for (int i = 0; i < n; i++) {
        bullets_fired++;
        if (a[i] > bullets_fired) {
            h -= (a[i] - bullets_fired);
        }
        if (h <= 0) {
            hablu_wins = false;
            break;
        }
    }

    if (hablu_wins) {
        cout << "Hablu\n";
    } else {
        cout << "Dablu\n";
    }

    return 0;
}