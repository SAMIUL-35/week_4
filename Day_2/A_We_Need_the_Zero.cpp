#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int x = -1;
        for (int j = 0; j < 256; j++) {
            int val = 0;
            for (int i = 0; i < n; i++) {
                val ^= (a[i] ^ j);
            }
            if (val == 0) {
                x = j;
                break;
            }
        }
        cout << x << endl;
    }
    return 0;
}
