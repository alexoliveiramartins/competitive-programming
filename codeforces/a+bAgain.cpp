#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t, n; cin >> t;
    while(t--){
        cin >> n;
        cout << n/10 + n % 10 << "\n";
    }
}