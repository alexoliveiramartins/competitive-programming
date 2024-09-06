#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, aux;
    cin >> A >> B;
    if(A > B){
        aux = A;
        A = B;
        B = aux;
    }

    if(A == B) cout << "1";
    else if((A + B) % 2 == 0) cout << "3";
    else cout << "2";
}