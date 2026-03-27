#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    if (!(cin >> n >> q)) return 0;

    vector<long long> pref(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        long long val;
        cin >> val;
        pref[i] = pref[i - 1] + val;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << "\n";
    }

    return 0;
}