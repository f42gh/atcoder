#include<bits/stdc++.h>
using namespace std;
void a(){
    int n, x, a;
    cin >>n >>x;
    for (int i=0; i<=n-1; i++){
        cin >>a;
        if (a<x) {x =a; cout <<1 <<endl;}
        else cout <<0 <<endl;
    }
}

int main(){
    //a();
}
// byte, ms, kiB
