#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int j = 0; j < (1 << n); j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (j & (1 << i))
            {
                sum += v[i];
            }
            else
            {
                sum -= v[i];
            }
        }
        if (sum % 360 == 0)
        {
            cout << "YES" << '\n';
            return 0;
        }
    }
    cout << "NO" << '\n';
    return 0;
}