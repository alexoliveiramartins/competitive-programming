#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, min = 100, ans;
    int t; cin >> t;
    while(t--){
        cin >> a >> b;
        if(a > b){
            min = 100;
            for(int c = b; c < a; c++){
                if((c - a) + (b - c) < min){
                    min = (c - a) + (b - c) < min;
                    ans = c;
                }
            }
        }
        else if(b > a){
            min = 100;
            for(int c = a; c < b; c++){
                if((c - a) + (b - c) < min){
                    min = (c - a) + (b - c) < min;
                    ans = c;
                }
            }
        }
        else min = 0;
        cout << min;
        cout << endl;
    }
}