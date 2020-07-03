#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, int> P;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (n); i++)
#define repto(i, n) for(int i = 1; i <= (n); i++)
#define all(c) (c).begin, (c).end()
#define uniq(c) c.erase(unique(all(c)), (c).end())
#define _1 first
#define _2 second
#define pb push_back
#define INF 1145141919
#define MOD 1000000007
#define DEBUG(x) cout << #x << ": " << x << endl;

int main() {
  int H, N;
  cin >> H >> N;
  vector<int> A(N);
  vector<int> B(N);
  rep(i, N)
    cin >> A[i] >> B[i];
  int dp[10005];
  repto(i, H)
    dp[i] = INF;
  dp[0] = 0;
  repto(i, H) {
    rep(j, N) {
      if ((i - A[j]) >= 0) {
        if (dp[i] > dp[i-A[j]]+B[j])
          dp[i] = dp[i-A[j]]+B[j];
      }
      else {
        if (dp[i] > B[j])
          dp[i] = B[j];
      }
    }
  }
  cout << dp[H] << endl;
}
