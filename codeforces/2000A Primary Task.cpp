#include <bits/stdc++.h>
using namespace std;

#define ll long long

// naive solution 

// int main(){
//     int n, t; cin >> t;
//     string s;
//     while(t--){
//         cin >> s;
//         if(s[0] == '1' && s[1] == '0'){
//             if(s[2] >= '2'){
//                 cout << "YES\n";
//             }
//             else if(s.length() > 3 && s[2] >= '1'){
//                 cout << "YES\n";
//             }
//             else cout << "NO\n";
//         }
//         else cout << "NO\n";
//     }
// }

// optimal

int main(){
    int t, n; cin >> t; 
    while(t--){
        cin >> n;
        if((n <= 109 && n >= 102) || (n >= 1010 && n <= 1099)){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}