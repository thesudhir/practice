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
        int n, k;
        cin >> n >> k;
        vector<int> h(n);
        long long sum = 0;
        for(auto &i : h){
             cin >> i;
             sum += i;
        }
        long long l1 = 0, l2 = 0;
        sort(h.begin(), h.end(), [](auto a, auto b){ return a > b;});
        int i = 0;
        while(i < n && (l1 < k || l2 < k)){
            if(l1 < k)
                l1 += h[i++];
            if(l2 < k)
                l2 += h[i++];
        }
        if(l1 < k || l2 < k)
            cout << -1;
        else
            cout << i;
        cout << endl;
    }
    return 0;
}
