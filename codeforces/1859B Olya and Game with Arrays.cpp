#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    int m, n, aux;
    
    while(t--){
        cin >> n;
        vector<vector<int>> v(n);
        for(int i = 0; i < n; i++){
            cin >> m;
            vector<int> a(m);
            for(int c = 0; c < m; c++){
                cin >> aux;
                v[i].push_back(aux);
            }
            // v[i] = a;
        }
        for(int c = 0; c < n; c++){
            for(int i : v[c]){
                cout << i << " ";
            }
            cout << endl;
        }
    }
    

}