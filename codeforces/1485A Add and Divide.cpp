#include <bits/stdc++.h>
using namespace std;

int counter(int a, int b){
    int counter = 0;
    while(a != 0){
        a /= b;
        counter++;
    }
    return counter;
}

int main(){
    long long a , b, A, B, ops, best;

    int t; cin >> t;
    while(t--){
        best = 100000;
        cin >> a >> b;

        for(int c = 0; c <= 20; c++){
            if(b > 1){
                ops = c;
                A = a;
                while(A > 0){
                    A /= b;
                    ops++;
                }
                best = min(best, ops);
            }
            b++;
        }
        cout << best << "\n";
    }
}