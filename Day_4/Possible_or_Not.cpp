#include <bits/stdc++.h>

using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int f = -1;
        for (int i = 0; i < n; i++) {
            int s;
            cin >> s;
            if ((s & m) == m) {
                f = f & s; 
            }
        }
        if (f == m) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
