#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll t;
  cin >> t;
  for(ll i = 1; i <= t; ++i){
      cout << "Case #" << i << ": ";
      ll n,b;
      cin >> n >> b;
      vector<ll> v(n);
      for(ll &a : v) cin >> a;
      sort(v.begin(),v.end());
      ll cnt  = 0;
      for(ll i = 0; i < n; i++){
          if(b >= v[i]){
              cnt++;
              b -= v[i];
          }
      }
      cout << cnt << endl;
      
  }
    
    
    
    return 0;
}
