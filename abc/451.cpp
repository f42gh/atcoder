#include<bits/stdc++.h>
using namespace std;

void a(){
    string input;
    cin >>input;
    cout <<((input.size() %5) ==0 ?"Yes":"No");
}

void b(){
    int n, m, a, b;
    cin >>n >>m;
    vector<int> M_a(m, 0);
    vector<int> M_b(m, 0);
    for (int i=0; i <n; i++){
        cin >>a >>b;
        M_a[a-1] +=1;
        M_b[b-1] +=1;
    };
    for (int j=0; j <m; j++){
        cout <<(M_b[j] -M_a[j]) <<endl;
    };
}

int main(){
    // a();
    //b();
}
// byte, ms, kiB
