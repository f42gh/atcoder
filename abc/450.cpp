#include<bits/stdc++.h>
using namespace std;
void a(){
    int n;
    cin >>n;
    for (int i=0; i+1 <n; i++){
        cout <<n -i <<',';
    }
    cout <<1;
}

void b(){
        int n, a, b, cost; //vector<int> cost;
       cin >>n;
       for (int i=0; i<n; i++){
           for (int j=0; j<(n-1); j++ ){
               cin >>cost;
           }
       }

      cout <<(?"Yes": "No");
}

int main(){
    //a();
    // b();
}
