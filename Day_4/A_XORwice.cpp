#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
  cin>>t;
  while (t--)
  {
    int a,b;
    cin>>a>>b;
    int x=0;
     int c,d;
    
     x=__lg(a);
        int y=(1<<x);
        c=a^y;
        d=b^y;
cout<<(c^d)<<endl;
  }
 



    return 0;
}