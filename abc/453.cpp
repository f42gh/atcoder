#include<bits/stdc++.h>
using namespace std;

string a(){
    int n; string s, s2; cin >>n >>s;
    for (int i=0; i <=n; i++){
        if (s.substr(i) !="o") s2 +=s.substr(i);
    }
    return s2;
}

int main(){
    // a();
}
// byte, ms, kiB
