#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> p(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
        }

        vector<int> diff(n + 3, 0);

        for (int i = 1; i <= n; i++) {
            if (p[i] <= i) {
                diff[i + 1]++;
                diff[n + 2]--;
            } else {
                diff[i + 1]++;
                diff[p[i] + 1]--;
            }
        }

        int cur = 0;
        int ans = 0;

        for (int r = 1; r <= n + 1; r++) {
            cur += diff[r];
            ans = max(ans, cur);
        }

        cout << ans << '\n';
    }

    return 0;
}
