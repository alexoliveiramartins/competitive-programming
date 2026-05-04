#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    // solucao naive
    // for(int i = a; i <= b; i++){
    //     if(i % c == 0) {
    //         cout << i;
    //         return 0;
    //     }
    // }
    // cout << -1;

    int y = (b/c) * c;
    if(y >= a) cout << y;
    else cout << -1;
    return 0;   
}