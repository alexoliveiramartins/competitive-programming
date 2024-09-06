#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin >> a;

    set<string> subs;
    for(int c = 1; c <= a.size(); c++){
        for(int j = 0; j + c <= a.size(); j++){
            if(subs.find(a.substr(j, c)) == subs.end() && a.substr(j, c) != "") subs.insert(a.substr(j, c));
            // cout << a.substr(j, c) << " ";
        }
    }

    // for(string s : subs) cout << s << ", \n";
    cout << subs.size() << "\n";
}