#include<bits/stdc++.h>
using namespace std;
using ll =long long;

void a(){
  string s; int n; cin >>s >>n;
  string s2 =s.substr(n, s.length()-2*n);
  cout <<s2;
}

void b(){
  int h, w; cin >>h >>w;
  vector<vector<int>> s(h, vector<int>(w));
  for (int i=0; i<h; i++){
    for (int j=0; j<w; j++){
      int cnt=4;
      if (i==0) cnt =cnt-1;
      if (i==h-1) cnt =cnt-1;
      if (j==0) cnt =cnt-1;
      if (j==w-1) cnt =cnt-1;
      s[i][j]=cnt;
    }
  }
  for (int i=0;i<h;i++) {
    for (int j=0; j<w; j++) {
      cout << s[i][j] <<" ";
    }
    cout <<endl;
  }
}

void c(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s; cin >>s;
  ll cnt=0;
  for (int i=0;i<(int)s.size();i++){
    if (s[i] =='C') {
      cnt+=1;
      // int tmp =
      // cout <<tmp <<endl;
      if (1<=i &&i<((int)s.size()-1)) cnt += min(i, ((int)s.size()-i-1));
    }
  }
  cout <<cnt;
}
