#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(k + 1);
        for (int i = 1; i <= k; i++) {
            cin >> a[i];
        }

        vector<int> b(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }

        vector<int> ans;

        while (true) {
            int idx = -1;
            int best = -1;

            for (int i = 1; i <= n; i++) {
                if (b[i] <= k && b[i] > best) {
                    best = b[i];
                    idx = i;
                }
            }

            if (idx == -1) break;

            ans.push_back(idx);
            b[idx]++;
        }

        if ((int)ans.size() > 1000) {
            cout << -1 << '\n';
        } else {
            cout << ans.size() << '\n';
            for (int x : ans) {
                cout << x << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}
