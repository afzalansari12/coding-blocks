#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        long long prefix = 0;
        bool ok = true;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            prefix += a[i];

            long long need = 1LL * (i + 1) * (i + 2) / 2;

            if (prefix < need)
                ok = false;
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}