#include<bits/stdc++.h>

using namespace std;

using ll = long long;


int main(){
#ifndef ONLINE_JUDGE
    freopen("/home/thesudhir/code/online_judge/bitMask/input.txt", "r", stdin);
#endif
    int N;
    while(cin >> N){
        int prev;
        cin >> prev;
        vector<bool> flag(N, false);
        int status = 0;
        bool jolly = true;
        for(int i = 1; i < N; ++i){
            int cur;
            cin >> cur;
            if(!jolly) continue;
            int diff = abs(cur - prev);
            if(diff >= N){
                 jolly = false;
                 continue;
            }
            if(flag[diff]){
                jolly = false;
                continue;
            }
            else
            {
                flag[diff] = true;
            }
        }
        jolly? cout << "Jolly\n" : cout << "Not jolly\n";
    }
    return 0;
}
