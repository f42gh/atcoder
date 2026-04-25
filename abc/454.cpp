#include<bits/stdc++.h>
using namespace std;
using ll =long long;

void a(){
    int L, R; cin >>L >>R;
    cout <<(R -L +1);
}

void b(){
    int N, M, f; cin >>N, M;
    string F, diff, some; diff="Yes"; some="No";
    for (int x :){
        cin >>f;
        F +=f;
        if (i!=0) {
            if (F.substr(i-1) !=F.substr(i)) diff ="No";
        };
    }
    cout <<diff <<endl <<some;
}

int main(){
    //a();
    //b();
}
// byte, ms, kiB
