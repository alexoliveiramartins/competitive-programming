#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t, n, s, m; cin >> t;
    while(t--){
        int aux, l, r, last = 0, f = 0;
        cin >> n >> s >> m;
        for(int c = 0; c < n; c++){
            cin >> l >> r;
            if((l - last) >= s) f++;
            last = r;
        }
        if(m - last >= s) f++;
        if(!f) cout << "NO\n";
        else cout << "YES\n";
    }
}