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

int m = INF;

// void dfs(int p, int q, int cnt) {
//   if (p == H-1 && q == W-1) {
//     m = min(m, cnt);
//   }
//   else if (p == H-1) {
//     if ()
//   }
// }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int H, W;
  char s[105][105];
  cin >> H >> W;
  rep(i, H) {
    rep(j, W) {
      cin >> s[i][j];
    }
  }
  vector<vector<pair<int, char> > > v1(H);
  vector<vector<pair<int, char> > > v2(W);
  rep(i, H) {
    for (int j = 1; j < W; j++) {
      if (s[i][j] != s[i][j-1]) {
        v1[i].pb(make_pair(j-1, s[i][j-1]));
      }
      if (j == W-1) {
        v1[i].pb(make_pair(j, s[i][j]));
      }
    }
  }
  rep(i, W) {
    for (int j = 1; j < H; j++) {
      if (s[j][i] != s[j-1][i]) {
        v2[i].pb(make_pair(j-1, s[j-1][i]));
      }
      if (j == H-1) {
        v2[i].pb(make_pair(j, s[j][i]));
      }
    }
  }
  rep(i, H) {
    rep(j, v1[i].size()) {
      cout << v1[i][j]._1 << v1[i][j]._2 << ' ';
    }
    cout << endl;
  }
  cout << endl;
  rep(i, W) {
    rep(j, v2[i].size()) {
      cout << v2[i][j]._1 << v2[i][j]._2 << ' ';
    }
    cout << endl;
  }
}
