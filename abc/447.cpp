#include <bits/stdc++.h>
using namespace std;
void a(){
    int n, m, t;
    cin >>n >>m;
    if (n /2 ==0 &&n !=1)  t =n /2;
    else t =(n +1) /2;
    if (m <=t) cout <<"Yes";
    else cout <<"No";
}

int main(){
    a();
}
