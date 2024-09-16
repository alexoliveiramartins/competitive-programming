#include <bits/stdc++.h>
using namespace std;

#define ll long long

int dist(int x, int y, int x2, int y2){
    return (y-y2)*(y-y2) + (x-x2)*(x-x2);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int aux, n, t; 
    cin >> t;
    vector<int> x;
    vector<int> y;
    for(int c = 0; c < t; c++){
        cin >> aux;
        x.push_back(aux);
    }
    for(int c = 0; c < t; c++){
        cin >> aux;
        y.push_back(aux);
    }
    int m = 0;
    for(int c = 0; c < t; c++){
        for(int j = 0; j < t; j++){
            if(c != j){
                m = max(dist(x[c], y[c], x[j], y[j]), m);
            }
        }
    }
    cout << m << "\n";
}