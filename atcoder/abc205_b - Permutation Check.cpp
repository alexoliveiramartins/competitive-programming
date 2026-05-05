#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t; 
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> t;
        vec[i] = t;
    }
    sort(all(vec));

    for(int i = 0; i < n; i++){
        if(vec[i] != i+1){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}