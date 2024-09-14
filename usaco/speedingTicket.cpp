#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, s, d, last = 0,  ans = 0; 
    cin >> n >> m;
    vector<int> road(100);
    vector<int> cow(100);
    set<int> points;
    while(n--){
        cin >> d >> s;
        fill(road.begin() + last, road.begin() + last + d, s);
        last += d;
    }
    last = 0;
    while(m--){
        cin >> d >> s;
        fill(cow.begin() + last, cow.begin() + last + d, s);
        last += d;
    }
    ans = 0;
    for(int c = 0; c < 100; c++){
        if((cow[c] - road[c]) > ans) ans = cow[c] - road[c];
    }
    cout << ans << "\n";
}