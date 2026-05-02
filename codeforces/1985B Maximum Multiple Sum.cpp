#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n, t; cin >> t;
    while(t--){
        int maior = 0, maiorSum = 0;
        cin >> n;
        for(int c = 2; c <= n; c++){
            // cout << "c: " << c << " soma: " << ((c + (c*(n/c)) * n / c) / 2) << endl;
            if(((c + (c*(n/c)) * n / c) / 2) > maiorSum){
                maior = c; 
                maiorSum = ((c + (c*(n/c)) * n / c) / 2);
            }
        }
        cout << maior << "\n";
    }
}