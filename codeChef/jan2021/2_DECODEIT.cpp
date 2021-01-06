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
        int n;
        cin >> n;
        int num = 0;
        string ans = "", s;
        cin >> s;
        for(int i = 0; i <=n; ++i){
            if(i && i % 4 == 0){
                ans += (num + 'a');
                num = 0;
            }
            if(i != n){
                num *= 2;
                num += s[i] - '0';
            }
        }
        cout << ans << endl;
    }
    return 0;
}
