#include<bits/stdc++.h>
using namespace std;

void a(){
    int L, R; cin >>L >>R;
    cout <<(R -L +1);
}

void b(){
    int N, M; cin >>N;
    string diff, some, F; diff="Yes"; some="No";
    for (int i=0; i <=N; i++){
        cin >>F[i];
        if ((i>0)&&(diff=="Yes")) {(F[i-1]==F[i] ?diff="No" :diff="Yes");
    }
    cout <<diff <<endl <<some;
}

int main(){
    //a();
    //b();
}
// byte, ms, kiB
