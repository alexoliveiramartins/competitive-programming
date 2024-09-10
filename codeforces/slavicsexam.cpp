#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int t, n; cin >> t;
    while(t--){
        int count = 0, k = 0;
        string s;
        string s2;
        cin >> s;
        cin >> s2;
        for(int c = 0; c < s.length(); c++){
            if(s[c] == '?') count++;
        }
        
        if(count > s2.length()){
            cout << "YES";
            for(int c = 0; c < s.length(); c++){
                if(s[c] == '?' && k >= s2.length()) cout << 'a';
                else if(s[c] == '?') cout << s2[k++];
                else cout << s[c];
            }
        }
    }
}