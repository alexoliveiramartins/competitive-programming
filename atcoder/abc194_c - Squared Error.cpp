#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, ans = 0;
    cin >> n;
    vector<int> vec(n);
    vector<int> rec(401);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
        rec[vec[i] + 200]++;
    }

    // for(int i = 0; i < 400; i++){
    //     if(rec[i] > 0) cout << i-200 << ": " << rec[i] << endl ;
    // }

    for(int i = 0; i < 401; i++){
        for(int j = i+1; j < 401; j++){
            if(i != j && rec[i] != 0 && rec[j] != 0){
                // cout << rec[j] << " * (" << i-200 << " - " << j-200 << ")^2" << endl;
                ll diff = (i-200) - (j-200);
                ans += 1LL * rec[j] * rec[i] * diff * diff;
            }
        }
    }

    cout << ans;
}