#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (n); i++)
#define repto(i, n) for(int i = 0; i <= (n); i++)
#define all(c) (c).begin(), (c).end()
#define uniq(c) c.erase(unique(all(c)), (c).end())
#define _1 first
#define _2 second
#define pb push_back
#define INF 1145141919
#define MOD 1000000007
#define DEBUG(x) cout << #x << ": " << x << endl;
template<typename T> T gcd(T a, T b) { if (b == 0) return a; return gcd(b, a % b); }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int H, W;
  cin >> H >> W;
  char v[H][W];
  int v1[H][W];
  int v2[H][W];
  int m = 0;
  rep(i, H) {
    rep(j, W) {
      cin >> v[i][j];
    }
  }
  rep(i, H) {
    int m1 = 0;
    int cnt = 0;
    rep(j, W) {
      if (v[i][j] == '.') {
        cnt++;
      }
      else {
        cnt = 0;
      }
      v1[i][j] = cnt;
    }
  }
  rep(i, H) {
    int m1 = 0;
    for (int j = W-1; j >= 0; j--) {
      if (v1[i][j] != 0) {
        if (j == W-1)
          m1 = v1[i][j];
        else if (v1[i][j+1] == 0)
          m1 = v1[i][j];
        else
          v1[i][j] = m1;
      }
    }
  }
  rep(i, W) {
    int m2 = 0;
    int cnt = 0;
    rep(j, H) {
      if (v[j][i] == '.') {
        cnt++;
      }
      else {
        cnt = 0;
      }
      v2[j][i] = cnt;
    }
  }
  rep(i, W) {
    int m1 = 0;
    for (int j = H-1; j >= 0; j--) {
      if (v2[j][i] != 0) {
        if (j == H-1)
          m1 = v2[j][i];
        else if (v2[j+1][i] == 0)
          m1 = v2[j][i];
        else
          v2[j][i] = m1;
      }
    }
  }
  rep(i, H) {
    rep(j, W) {
      m = max(v1[i][j] + v2[i][j], m);
    }
  }
  cout << m-1 << endl;
}
