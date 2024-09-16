#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t; 
    cin >> t;
    string a, b;
    vector<pair<string, string>> w;
    vector<int> alpha(26);
    while(t--){
        cin >> a >> b;
        w.push_back(make_pair(a, b));
        w.push_back(make_pair(b, a));
    }
    for(int c = 0; c < 2; c++){
        string aux = w[c].first;
        for(int j = 0; j < w.size(); j++){
            if(w[c].first != w[j].second && w[c].first != w[j].first){
                aux += w[j].first;
            }
        }
        vector<int> a(26);
        fill(a.begin(), a.end(), 0);
        for(int i = 0; i < aux.length(); i++){
            a[aux[i] - 'a']++;
        }
        for(int c = 0; c < 26; c++){
            if(a[c] > alpha[c]) alpha[c] = a[c];
        }
    }
    for(int i : alpha) cout << i << "\n";
}