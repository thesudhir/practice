#include<bits/stdc++.h>

using namespace std;
using ll = long long;
ll binPow(ll x, ll y, ll n){ // x^y mod n
  x %= n;
  ll res = 1;
  while(y > 0){
    if(y & 1)
      res = res * x % n;
  x = x * x % n;
    y >>= 1;
  }
  return res;
}
int main(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  #endif
  int T;
  cin >> T;
  while(T--){
    ll x, y , n;
    cin >> x >> y >> n;
    cout << binPow(x, y, n) << endl;
  }
   return 0;
}
