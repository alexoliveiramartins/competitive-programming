#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, t, x, sum = 0; 

    vector<ll> vec;    
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        sum += n;
        vec.push_back(n);
    }
    cin >> x;

    ll low = x / sum;
    ll ans = sum * low;

    t *= low;
    for(int i = 0; i < t; i++){
        ans += vec.at(i);
        if(ans > x) {
            t += i;
            break;
        }
    }
    cout << t+1 << endl;
}