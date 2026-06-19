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

        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<int> used(n, 0);
        vector<int> pos(n);

        bool ok = true;

        for (int j = n - 1; j >= 0; j--) {
            int pick = -1;

            for (int i = n - 1; i >= 0; i--) {
                if (!used[i] && a[i] <= b[j]) {
                    pick = i;
                    break;
                }
            }

            if (pick == -1) {
                ok = false;
                break;
            }

            used[pick] = 1;
            pos[j] = pick;
        }

        if (!ok) {
            cout << -1 << '\n';
            continue;
        }

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (pos[i] > pos[j]) ans++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}