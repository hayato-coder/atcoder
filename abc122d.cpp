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

  int N;
  cin >> N;
  vector<vector<int> > dp(14, vector<int>(N+1, 0));
  dp[0][0] = 1;
  for (int i = 1; i <= N; i++) {
    dp[0][i] = 2*dp[0][i-1]+2*dp[2][i-1]+2*dp[4][i-1]+2*dp[5][i-1]+2*dp[6][i-1]+dp[9][i-1]+dp[10][i-1]+2*dp[12][i-1];
    dp[1][i] = dp[0][i-1]+dp[4][i-1]+dp[6][i-1]+dp[10][i-1];
    dp[2][i] = dp[0][i-1]+dp[2][i-1]+dp[9][i-1]+dp[10][i-1];
    dp[3][i] = dp[1][i-1]+dp[7][i-1]+dp[8][i-1];
    dp[4][i] = dp[1][i-1];
    dp[5][i] = dp[1][i-1]+dp[5][i-1]+dp[7][i-1]+dp[8][i-1];
    dp[6][i] = dp[1][i-1]+dp[7][i-1]+dp[8][i-1];
    dp[7][i] = dp[2][i-1]+dp[9][i-1]+dp[12][i-1];
    dp[8][i] = dp[3][i-1]+dp[11][i-1];
    dp[9][i] = dp[3][i-1]+dp[11][i-1];
    dp[10][i] = dp[3][i-1]+dp[11][i-1];
    dp[11][i] = dp[5][i-1];
    dp[12][i] = dp[6][i-1];
    dp[13][i] = dp[3][i-1]+dp[4][i-1]+dp[7][i-1]+dp[8][i-1]+dp[9][i-1]+dp[10][i-1]+dp[11][i-1]+dp[12][i-1]+4*dp[13][i-1];
  }
  rep(i, 14) {
    cout << dp[i][N] << ' ';
  }
  cout << endl;
}
