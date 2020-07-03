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
#define mp make_pair
#define INF 1145141919
#define MOD 1000000007
#define DEBUG(x) cout << #x << ": " << x << endl;
template<typename T> T gcd(T a, T b) { if (b == 0) return a; return gcd(b, a % b); }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int W;
  int N, K;
  int w[51];
  int v[51];
  int dp[51][10001];
  int dp2[51][10001];
  cin >> W;
  cin >> N >> K;
  rep (i, N) {
    cin >> w[i] >> v[i];
  }
  memset(dp, 0, sizeof(dp));
  memset(dp2, 0, sizeof(dp2));
  for (int i = N-1; i >= 0; i--) {
    for (int j = 0; j <= W; j++) {
      if (j < w[i] || dp2[i+1][j] >= K) {
        dp[i][j] = dp[i+1][j];
        dp2[i][j] = dp2[i+1][j];
      }
      else {
        dp[i][j] = max(dp[i+1][j], dp[i+1][j-w[i]]+v[i]);
        if (dp[i+1][j-w[i]]+v[i] > dp[i+1][j])
          dp2[i][j] = dp2[i+1][j-w[i]]+1;
        else
          dp2[i][j] = dp2[i+1][j];
      }
      cout << dp[i][j] << ' ' << i << ' ' << j << ' ' << dp2[i][j] << endl;
    }
  }
  cout << dp[0][W] << endl;
}
