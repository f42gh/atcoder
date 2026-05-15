#include<bits/stdc++.h>
using namespace std;
using ll =long long;

void b(){
  n =200000;//cin >>n;
  for (int i=0; i <n; i++) {
    cin >>l;
    for (int j=0; j<l; j++) {
      cin >>B[i][j];
    }
  }
  cin >>x >>y;
  cout <<B[x-1][y-1];
}

int main(){
    b();
}
