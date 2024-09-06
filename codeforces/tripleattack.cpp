#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n, t = 0, sum = 0;
    cin >> n;
    long long aux;
    for(int c = 0; c < n; c++){
        cin >> aux;
        sum += aux;

        while(sum > 0){
            t++;
            if(t % 3 == 0){
                if(sum >= 5){
                    aux = sum / 5;
                    sum -= 5 * aux;
                    t += (3 * aux)-1;
                    sum %= 5;
                }
                else sum -= 3;
                // t++;
            }
            else {
                // t++;
                sum--;
            }
        }
        if(sum < 0) sum = 0;
    }
    // cout << sum << "\n";

    cout << t << "\n";
}