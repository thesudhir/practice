#include<bits/stdc++.h>

using namespace std;

using ll = long long;

ll binPow(ll B, ll P, ll M){
    ll res = 1;
    B %= M;
    while(P){
        if(P&1)
            res = res * B % M;
        B = B * B % M;
        P >>= 1;
    }
    return res;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("/home/thesudhir/code/online_judge/input.txt", "r", stdin);
#endif
    ll B, P , M;
    while(cin >> B >> P >> M){
        cout << binPow(B, P, M) << endl;
    }
    return 0;
}
