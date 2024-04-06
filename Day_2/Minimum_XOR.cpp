#include <bits/stdc++.h>

using namespace std;

int main ()

{
  int t;
  cin>>t;
  while (t--)
  {
   int n;
   cin>>n;
   vector<int> v(n);
   int ans=0;
   for (int i = 0; i < n; i++)
   {
    cin>>v[i];
    ans=(ans^v[i]);
    
       }
    int res=INT_MAX;
      for (int i = 0; i <n ; i++)
      {
        
       res=min(res,min(ans,(ans^v[i])));
       
      }
   cout<<res<<endl;
   
  }
  



    return 0;
}