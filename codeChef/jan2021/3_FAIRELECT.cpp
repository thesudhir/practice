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
        int n, m;
        cin >> n >> m;
        vector<int> a(n,0), b(m,0);
        long long sumA = 0, sumB = 0;
        for(auto &i : a){
            cin >> i;
            sumA += i;
        }
        for(auto &i : b){
             cin >> i;
             sumB += i;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), [](auto x, auto y){ return x > y;});
        int i = 0;
        while(i < min(m, n) && sumA <= sumB){
            if(a[i] < b[i]){
                sumA += b[i] - a[i];
                sumB -= b[i] - a[i];
            }
            ++i;
        }
        if(sumA <= sumB)
            cout << -1;
        else
            cout << i;
        cout << "\n";
    }
    return 0;
}
