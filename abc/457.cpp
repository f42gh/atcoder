#include<bits/stdc++.h>
using namespace std;
using ll =long long;

void a(){
  ll n, x, y, l, m;
  cin >>n;
  int A[1000];
  for (int i=0; i <n; i++) cin >>A[i];
  cin >>x;
  cout <<A[x-1] <<endl;
}

void b(){
  int N, X, Y;
  cin >>N;
  vector<vector<int>> vec(N); //n行の空のベクタv, v[i]の長さに可変
  for (int i=0; i<N; i++) {
    int L; cin >>L;
    vec[i].resize(L); //lのサイズに初期化
    for (int j=0; j<L; j++) cin >>vec[i][j];
  }
  cin >>X >>Y;
  cout <<vec[X-1][Y-1];
}

int main(){
  ;
}
