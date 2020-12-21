#include<bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
#endif
    int n, p;
    n = 2, p = 38; 
    cout << log10(n) << endl;
    fflush(stdout);
    int fm = fmod(p * log10(n), 1);
    double fl = fmod(p *log10(n), 1);
    cout << (2 + fm) << endl;
    cout << (2 + fl) << endl;
    cout << pow (10, 2 + fl) << endl;
    cout << pow (10, 2 + fm) << endl; 
    int l = (int) pow(10, 2+fmod(p * log10(n), 1));
    cout << p << " " << log10(n) << " " << p * log10(n) << " " << fmod(p * log10(n), 1) << " " << 2 + fmod(p*log10(n) , 1);
    fflush(stdout);
    cout << fmod(p * log10(n), 1) << endl;
    cout << l << endl;
    return 0;
}
