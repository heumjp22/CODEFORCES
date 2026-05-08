#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        vector<int> a(7);

        int sum = 0;
        int mx = -100;

        for (int i = 0; i < 7; i++) {
            cin >> a[i];
            sum += a[i];
            mx = max(mx, a[i]);
        }

        cout << 2 * mx - sum << '\n';
    }

    return 0;
}
