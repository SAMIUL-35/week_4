#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, h;
    cin >> n >> m >> h;
    vector<int> a(m + 1);
    for (int i = 0; i <= m; i++) {
        cin >> a[i];
    }
    vector<vector<int>> f;
    for (int i = 0; i <= m; i++) {
        vector<int> v;
        for (int k = 0; k < n; k++) { 
            if ((a[i] >> k) & 1) { 
                v.push_back(1);
            } else {
                v.push_back(0);
            }
        }
        f.push_back(v);
    }
    int ans = 0;
    vector<int> fedor_mask = f[m]; 
    for (int i = 0; i < f.size() - 1; i++) {
        vector<int> d = f[i];
        int cnt = 0;
        for (int k = 0; k < n; k++) { 
            if (fedor_mask[k] != d[k]) {
                cnt++;
            }
        }
        if (cnt <= h) {
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}
