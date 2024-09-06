#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    int aux, n;
    // vector<int> revAlice;
    while(t--){
        vector<int> alice;
        vector<int> bob;
        cin >> n;
        for(int c = 0; c < n; c++){
            cin >> aux;
            alice.push_back(aux);
        }
        for(int c = 0; c < n; c++){
            cin >> aux;
            bob.push_back(aux);
        }
        // revAlice = alice;
        if(bob == alice){
            cout << "Bob\n";
            continue;
        }
        reverse(alice.begin(), alice.end());

        if(bob == alice) {
            cout << "Bob\n";
            continue;
        }

        cout << "Alice\n";
    }
}