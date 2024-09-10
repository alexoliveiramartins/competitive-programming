#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, aux, t; cin >> t;
    while(t--){
        long long prod = 1;
        cin >> n >> k;
        for(int c = 0; c < n; c++){
            cin >> aux; 
            prod *= aux;
        }
        if(2023 % prod == 0){
            cout << "YES\n";
            cout << 2023 / prod << " ";
            for(int c = 0; c < k-1; c++){
                cout << "1 ";
            }
            cout << "\n";
        }
        else cout << "NO\n";
    }
}