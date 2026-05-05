#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t, ans = 0; 
    cin >> n;
    vector<int> vec;
    while(n--){
        cin >> t;
        if(t > 10) ans += t - 10;
        vec.push_back(n);
    }
    cout << ans;
}