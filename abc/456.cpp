#include<bits/stdc++.h>
using namespace std;
using ll =long long;

void a(){
  int x; cin >>x;
  cout <<((3<=x &&x<=18) ?"Yes" :"No");
}

void b(){
  vector<vector<int>> cnt(3, vector<int>(7));
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 6; j++) {
      int x;
      cin >> x;
      cnt[i][x]++;
    }
  }

  vector<int> v = {4, 5, 6};
  int tot = 0;
  do {
    tot += cnt[0][v[0]] * cnt[1][v[1]] * cnt[2][v[2]];
  } while (next_permutation(v.begin(), v.end()));

  cout << fixed << setprecision(10) << (long double)tot / 216.0L << '\n';
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  b();
}
