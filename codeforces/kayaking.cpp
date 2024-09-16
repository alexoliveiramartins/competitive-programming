#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, ans = 1000;
    cin >> n;
    n *= 2;
    vector<int> w(n);
    for(int c = 0; c < n; c++){
        cin >> w[c];
    }
    sort(all(w));
    for(int c = 0; c < n; c++){
        for(int j = c + 1; j < n; j++){
            vector<int> doubleKayak;
            for(int i = 0; i < n; i++){
                if(i != c && i != j){ doubleKayak.push_back(w[i]); }
            }

            int total_instability = 0;
            for(int i = 0; i < n-2; i += 2){
                total_instability += doubleKayak[i+1] - doubleKayak[i];
            }
            ans = min(ans, total_instability);
        }
    }
    cout << ans << "\n";
}