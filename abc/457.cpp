#include<bits/stdc++.h>
using namespace std;


long long n, x, y, l, m;

/*
void a(){
  cin >>n;
  int A[1000];
  for (int i=0; i <n; i++) cin >>A[i];
  cin >>x;
  cout <<A[x-1] <<endl;
}
*/
void b(){
  vector<vector<int>> B(x, vector<int>(y, 0));
  cin >>n;
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
 // a();
 b();
}
