#include <bits/stdc++.h>
# define ll long long
using namespace std;

int main ()

{
  ll t;
  cin>>t;
while (t--)
{
  ll n;
  cin>>n;
  vector<ll> v(n);
  for (ll i = 0; i < n; i++)
  {
    cin>>v[i];
  }
  sort(v.begin(),v.end(),greater<ll>());
  ll ans=1;
  ll xo=v[0];
  for (ll i = 1; i < n; i++)
  {
    if(xo>=v[i])
    {
xo=xo^v[i];
    }
    else
     {
ans++;
xo=v[i];
    }
  }
  cout<<ans<<endl;
}


    return 0;
}