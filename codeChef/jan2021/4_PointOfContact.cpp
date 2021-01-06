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
        int n, k , x, y;
        cin >> n >> k >> x >> y;
        if(x == y) 
            cout << n << " " << n << endl;
        k %= 4;
        int fx = x + min(n - x, n - y);
        int fy = y + min(n - x, n - y);
        
    }
    return 0;
}
