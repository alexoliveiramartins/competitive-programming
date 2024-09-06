#include <bits/stdc++.h>
using namespace std;

int main(){

    int t, a, b, sum;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(((a*1)+(b*2)) % 2 != 0) cout << "NO\n";
        else if(b % 2 == 1 && a < 2) cout << "NO\n";
        else cout << "YES\n";
    }
}