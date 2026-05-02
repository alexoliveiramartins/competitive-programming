#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, left, i;
    cin >> n >> k;
    left = 240 - k;
    if(left < 5){
        cout << 0;
        return 0;
    }
    vector<int> q(n);
    q[0] = 5;
    for(int c = 1; c < n; c++){
        q[c] = ((c+1) * 5) + q[c-1];
    }
    // int high = n, low = 0, mid;
    // while(high >= low){
    //     mid = (high + low) / 2;
    //     // cout << mid << " ";
    //     // if(q[mid] == left){
    //     //     cout << q[mid] << " == " << left << "\n";
    //     //     break;
    //     // }
    //     if(q[mid] <= left){
    //         low = mid + 1;
    //     }
    //     else if(q[mid] > left){
    //         high = mid - 1;
    //     }
    // }
    // cout << q[mid] << "\n";
    // cout << "left: " << left << "\n";
    // for(int i : q) cout << i << " ";
    // cout << endl;
    for(int i = 0; i < n; i++){
        // cout << i << "\n";
        if(q[i] <= left && q[i+1] > left){
            cout << i+1 << "\n";
            break;
        }
        else if(i+1 >= n){
            cout << n << "\n";
            break;
        }
    }
}