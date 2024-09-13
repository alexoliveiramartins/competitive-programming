#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n, t; cin >> t;
    vector<int> shells = {0, 1, 2};
    vector<int> ans; ans.resize(3);
    fill(ans.begin(), ans.end(), 0);
    while(t--){
        int a, b, g;
        cin >> a >> b >> g;
        swap(shells[a], shells[b]);
        ans[shells[g]]++;
    }
    auto it = *max_element(ans.begin(), ans.end());
    cout << it << "\n";
}