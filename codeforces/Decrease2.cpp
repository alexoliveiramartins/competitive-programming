#include <bits/stdc++.h>
using namespace std;

int main(){
    int aux, n, count = 2, ans = 0;
    vector<int> v;
    cin >> n;
    for(int c = 0; c < n ; c++){
        cin >> aux;
        v.push_back(aux);
    }

    while(count > 1){
        count = 0;
        sort(v.rbegin(), v.rend());
        v[0]--; v[1]--;
        for(int c = 0; c < n; c++){
            // cout << v[c] << " ";
            if(v[c] > 0) count++;    
        }
        // cout << " count : " << count <<  "\n";
        ans++;
    }
    cout << ans << "\n";
}