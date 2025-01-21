#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll N = 600851475143;

int primeCheck(ll n){
    if(n <= 1) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;  
    }
    return 1;
}

void solve(){
    ll n = N;
    ll maior = 1;

    for(ll i = 2; i <= n; i++){
        if(N % i == 0){
            if(primeCheck(i) && i >= maior){
                maior = i;
                n /= i;
            }
        }
    }
    if (n > 1) {
        maior = n;
    }

    cout << maior;
}

int main(){
    solve();
}