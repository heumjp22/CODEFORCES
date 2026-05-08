#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n;
        cin >> s;

        vector<int> visited(n, 0);

        int now = 0;
        visited[now] = 1;

        for (int i = 0; i < n; i++) {
            if (s[now] == 'R') {
                now++;
            } else {
                now--;
            }

            visited[now] = 1;
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (visited[i]) {
                ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
