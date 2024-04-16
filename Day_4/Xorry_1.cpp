#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int X;
        cin >> X;

     
        int MSB_pos = __lg(X);

    
        int A = 1 << MSB_pos;
        int B = 0;

        
        B=A^X;

        cout << B << " " << A << endl;
    }
    return 0;
}
