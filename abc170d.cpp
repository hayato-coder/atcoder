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

  int N;
  int cnt2 = 0;
  cin >> N;
  vector<int> A(N);
  map <int, int> m;
  rep(i, N) {
    cin >> A[i];
  }
  sort(all(A));
  int k = A[N-1];
  vector<bool> dp(k+1, true);
  for (int i = 0; i < N; i++) {
    if (dp[A[i]]) {
      for (int j = 2*A[i]; j<=k; j+=A[i]) {
        dp[j] = false;
      }
    }
  }
  int cnt = 0;
  rep(i, N) {
    if (dp[A[i]]) {
      cnt++;
      m[A[i]]++;
    }
  }
  for (auto ite = m.begin(); ite != m.end(); ite++) {
    if (ite->_2 > 1)
      cnt2 += ite->_2;
  }
  cout << cnt-cnt2 << endl;
}
