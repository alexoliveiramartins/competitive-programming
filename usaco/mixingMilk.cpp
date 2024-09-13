#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int b1, b2, c, n, t;
    vector<int> capacity(3);
    vector<int> milk(3);
    cin >> n;
    for(int c = 0; c < n; c++){
        cin >> capacity[c] >> milk[c];
    }
    for(int c = 0; c < 100; c++){
        b1 = c % 3;
        b2 = (c+1) % 3;
        int amount = min(milk[b1], capacity[b2] - milk[b2]);
        milk[b1] -= amount;
        milk[b2] += amount;   
    }
    for(int i : milk){
        cout << i << " ";
    }
}