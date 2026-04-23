#include<bits/stdc++.h>
using namespace std;

void a(){
    int n; string s;
    cin >>n >>s;
    cout <<(count(s.begin(), s.end(), 'A') >(s.size() /2) ?"A" :"T");
}

int main(){
    //a();
}
