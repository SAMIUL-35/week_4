#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        long long ans = 0;
        for (int i = 29; i >= 0; i--) {
            long long cnt = 0;
            for (int j = 0; j < n; j++) {
                if (v[j]>=(1<<i)&&v[j]<(1<<(i+1)))
                {
                    cnt++;
                }
            }
            ans += (cnt * (cnt - 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
