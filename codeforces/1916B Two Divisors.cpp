#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long aux = 0, a, b, d1 = 0, d2 = 0;
        cin >> a >> b;
        aux = b;
        while(1){
            aux += b;
            if(aux % a == 0 && aux % b == 0){
                for(int c = b; c < aux; c += a){
                    // cout << "aux(" << aux << ") % (" << c << ") = " << aux % c << "\n";
                    if(aux % c == 0){
                        d1 = c;
                        if(d1 != b) break;
                    }
                }
                for(int c = a; c < b; c+= a){
                    // cout << "aux(" << aux << ") % (" << c << ") = " << aux % c << "\n";
                    if(aux % c == 0){
                        d2 = c;
                        if(d2 != a) break;
                    }
                }
            }
            if(d1 == b && d2 == a){
                break;
            } 
        }
        cout << aux << endl;

    }
}