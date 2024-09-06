#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int t; cin >> t;
    int k;
    string s;
    while(t--){
        cin >> n;
        k = 0;
        vector<int> ans;
        for(int c = 0; c < n; c++){
            cin >> s;
            for(int j = 0; j < 4; j++){
                if(s[j] == '#'){
                    ans.push_back(j+1);
                    // cout << "A\n";
                }
            }
        }
        for(int c = n-1; c >= 0; c--){
            cout << ans[c] << " ";
        }

        cout << endl;
    }
}