#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
#ifndef ONLINE_JUDGE
freopen("/home/thesudhir/code/codeChef/jan2021/input.txt", "r", stdin);
#endif
    int T;
    cin >> T;
    while(T--){
         int n, k, d;
         cin >> n >> k >> d;
         int sum = 0;
         for(int i = 0; i < n; ++i){
             int t;
             cin >> t;
             sum += t;
         }
         int nContest = sum / k;
         cout << min(nContest, d) << endl;
    }
    return 0;
}
