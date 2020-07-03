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

ll mod_pow(ll x, ll n) {
  if (n == 0) return 1;
  ll res = mod_pow(x * x % MOD, n / 2);
  if (n & 1) res = res * x % MOD;
  return res;
}

ll modsubtraction(ll a, ll b) {
  ll ans = (a - b) % MOD;
  if (ans < 0)
    ans += MOD;
  return ans;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, K;
  ll s = mod_pow(10, 100);
  cin >> N >> K;
  ll sum1 = 0;
  ll sum2 = 0;
  vector<P> A(N+2);
  for (int i = 1; i <= N+1; i++) {
    sum1 += (i-1+s)%MOD;
    sum2 += (N+1-i+s)%MOD;
    sum1 %= MOD;
    sum2 %= MOD;
    if (i >= K) {
      A[i]._1 = sum1;
      A[i]._2 = sum2;
    }
  }
  ll ans = 0;
  for (int i = K; i <= N+1; i++) {
    // cout << modsubtraction(A[i]._2, A[i]._1) << endl;
    ans += modsubtraction(A[i]._2, A[i]._1)+1;
    ans %= MOD;
  }
  // for (int i = K; i <= N+1; i++) {
  //   cout << A[i]._1 << ' ' << A[i]._2 << endl;
  // }
  // sort(all(A));
  // ll ans = 0;
  // sum1 = A[K]._1;
  // sum2 = A[K]._2;
  // for (int i = K; i <= N+1; i++) {
  //   if (sum2 < A[i]._1) {
  //     ans += sum2-sum1+1;
  //     sum1 = A[i]._1;
  //     sum2 = A[i]._2;
  //   }
  //   else {
  //     sum2 = A[i]._2;
  //   }
  // }
  // ans += sum2-sum1+1;
  cout << ans << endl;
}
