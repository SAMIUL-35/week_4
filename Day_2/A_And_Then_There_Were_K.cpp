#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
  cin>>t;
  while (t--)
  {
    long long n;
    cin >> n;
    long long cnt=0;
    while(n!=0){
        cnt++;
        n=n/2;  
    }
    cout <<(1<<(cnt-1))-1  << endl;
  }
  


    return 0;
}