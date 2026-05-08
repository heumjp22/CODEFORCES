#include <bits/stdc++.h>
using namespace std;

int root(int x) {
    while (x % 2 == 0) {
        x /= 2;
    }
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);

        bool ok = true;

        for (int i = 1; i <= n; i++) {
            cin >> a[i];

            if (root(i) != root(a[i])) {
                ok = false;
            }
        }

        if (ok) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
