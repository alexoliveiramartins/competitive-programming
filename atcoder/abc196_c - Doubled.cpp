#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int ipow(int n, int exp){
    int p = 1;
    while(exp--) p*=n;
    return p;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, t = 0;
    cin >> n;

    for(int i = 1; ; i++){
        t = stoll(to_string(i) + to_string(i));
        if(t > n){
            cout << i-1;
            return 0;
        }
    }
}