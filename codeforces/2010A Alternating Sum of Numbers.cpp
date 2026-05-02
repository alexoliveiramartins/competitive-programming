#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n, sum, x, aux, t; cin >> t;
    while(t--){
        sum = 0;
        cin >> n;
        for(int c = 0; c < n; c++){
            cin >> aux;
            if(c % 2 == 0) sum += aux;
            else sum -= aux;
        }
        cout << sum << "\n";
    }
}