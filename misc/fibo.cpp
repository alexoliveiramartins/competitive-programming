#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n == 0) return 1;
    if(n == 1) return 1;
    else return fibonacci(n-2) + fibonacci(n-1);
}

void solve(){
    int ans = 0;
    for(int c = 1; fibonacci(c) <= 4000000; c++){
        if(fibonacci(c) % 2 == 0){
            cout << fibonacci(c) << " ";
            ans += fibonacci(c);
        }
    }
    cout << ans;
}

int main(){
    solve();
}