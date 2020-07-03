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
  vector<string> S(H);
  int d[102][102];
  int flag = 1;
  rep(i, H)
    cin >> S[i];
  repto(i, H+1) {
    repto(j, W+1) {
      if (i == 0 || i == H+1 || j == 0 || j == W+1)
        d[i][j] = 0;
      else if (S[i-1][j-1] == '#')
        d[i][j] = 0;
      else
        d[i][j] = 1;
    }
  }
  // repto(i, H+1) {
  //   repto(j, W+1) {
  //     cout << d[i][j];
  //   }
  //   cout << endl;
  // }
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      if ((d[i][j] == 0 || d[i][j] == 3) &&
          (d[i+1][j] == 0 || d[i+1][j] == 3 || d[i+1][j] == 2) &&
          (d[i-1][j] == 0 || d[i-1][j] == 3 || d[i-1][j] == 2) &&
          (d[i][j+1] == 0 || d[i][j+1] == 3 || d[i][j+1] == 2) &&
          (d[i][j-1] == 0 || d[i][j-1] == 3 || d[i][j-1] == 2) &&
          (d[i+1][j+1] == 0 || d[i+1][j+1] == 3 || d[i+1][j+1] == 2) &&
          (d[i+1][j-1] == 0 || d[i+1][j-1] == 3 || d[i+1][j-1] == 2) &&
          (d[i-1][j+1] == 0 || d[i-1][j+1] == 3 || d[i-1][j+1] == 2) &&
          (d[i-1][j-1] == 0 || d[i-1][j-1] == 3 || d[i-1][j-1] == 2)) {
        d[i][j] = 2;
        if (d[i+1][j] == 2)
          d[i+1][j] = 2;
        else
          d[i+1][j] = 3;
        if (d[i-1][j] == 2)
          d[i-1][j] = 2;
        else
          d[i-1][j] = 3;
        if (d[i][j+1] == 2)
          d[i][j+1] = 2;
        else
          d[i][j+1] = 3;
        if (d[i][j-1] == 2)
          d[i][j-1] = 2;
        else
          d[i][j-1] = 3;
        if (d[i+1][j+1] == 2)
          d[i+1][j+1] = 2;
        else
          d[i+1][j+1] = 3;
        if (d[i+1][j-1] == 2)
          d[i+1][j-1] = 2;
        else
          d[i+1][j-1] = 3;
        if (d[i-1][j+1] == 2)
          d[i-1][j+1] = 2;
        else
          d[i-1][j+1] = 3;
        if (d[i-1][j-1] == 2)
          d[i-1][j-1] = 2;
        else
          d[i-1][j-1] = 3;
      }
    }
  }
  // repto(i, H+1) {
  //   repto(j, W+1) {
  //     cout << d[i][j];
  //   }
  //   cout << endl;
  // }
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      if (d[i][j] == 0)
        flag = 0;
    }
  }
  if (flag == 0)
    cout << "impossible" << endl;
  else {
    cout << "possible" << endl;
    for (int i = 1; i <= H; i++) {
      for (int j = 1; j <= W; j++) {
        if (d[i][j] == 2)
          cout << '#';
        else
          cout << '.';
      }
      cout << endl;
    }
  }
  // repto(i, H+1) {
  //   repto(j, W+1) {
  //     cout << d[i][j];
  //   }
  //   cout << endl;
  // }
}
