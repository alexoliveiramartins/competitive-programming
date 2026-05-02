#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    long long maior, n, aux, sum, ans;
    while(t--){
        cin >> n;
        vector<int> v(n);
        aux = ans = maior = sum = 0;
        for(int c = 0; c < n; c++){
            cin >> aux;
            v[c] = aux;
        }
        for(int c = 0; c < n; c++){
            sum += v[c];
            if(v[c] > maior) maior = v[c];
            if(sum - maior == maior) ans++; 
        }
        cout << ans << "\n";
    }
}