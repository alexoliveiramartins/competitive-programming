#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<ll> vec;
    ll n;
    cin >> n;

    vec.resize(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }

    sort(all(vec));

    ll ans = n * (n - 1) / 2;

    for(int i = 0; i < n; ){
        int j = i;
        while(j < n && vec[j] == vec[i]){
            j++;
        }

        ll eq = j - i;
        ans -= eq * (eq - 1) / 2;
        i = j;
    }

    cout << ans << endl;
}
