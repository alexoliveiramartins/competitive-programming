#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, ans = 0, k = 0, j = 0;
    char s;
    int n; cin >> n;
    vector<int> l(n), r(n);
    while(n--){
        cin >> a >> s;
        if(s == 'R'){
            if(k > 0){
                if(a - r[k-1] >= 0) ans += a - r[k-1];
                else ans += (a - r[k-1]) * -1;
            }
            r[k++] = a;
        }
        else if(s == 'L'){
            if(j > 0){
                if(a - l[j-1] >= 0) ans += a - l[j-1];
                else ans += (a - l[j-1]) * -1;
            }
            l[j++] = a;
        }
    }
    cout << ans;
}