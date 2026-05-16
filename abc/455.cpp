#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void a() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << ((a != b && b == c) ? "Yes" : "No");
}

void b() {
    int H, W; cin >> H >> W;
    vector<string> S(H);
    for (int i = 0; i < H; i++) cin >> S[i];
    int ans = 0;
    // 長方形 (h1..h2, w1..w2) を全探索し、
    // その内部が 180 度回転で一致するかを判定する。
    for (int h1 = 0; h1 < H; h1++) {
        for (int h2 = h1; h2 < H; h2++) {
            for (int w1 = 0; w1 < W; w1++) {
                for (int w2 = w1; w2 < W; w2++) {
                    bool ok = true;
                    for (int i = h1; i <= h2 && ok; i++) {
                        for (int j = w1; j <= w2; j++) {
                            int ni = h1 + h2 - i;
                            int nj = w1 + w2 - j;
                            if (S[i][j] != S[ni][nj]) {
                                ok = false;
                                break;
                            }
                        }
                    }

                    if (ok) ans++;
                }
            }
        }
    }

    cout << ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    b();
}
