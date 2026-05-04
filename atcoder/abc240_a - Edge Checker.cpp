#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b; 
    cin >> a >> b;


    if(b-a == 1 || b-a == 9) cout << "Yes";
    else cout << "No";

    return 0;
}
 // abc240 A - Edge Checker.cpp