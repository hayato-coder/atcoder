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

ll combination(ll n, ll k) {
  ll sum1 = 1;
  ll sum2 = 1;
  for (int i = 1; i <= k; i++) {
    sum1 = sum1 * (n-k+i) % MOD;
    sum2 = sum2 * i % MOD;
  }
  sum2 = mod_pow(sum2, MOD-2);
  return sum1 * sum2 % MOD;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll n, a, b;
  ll ans, dis1, dis2;
  cin >> n >> a >> b;
  ans = mod_pow(2, n)-1;
  dis1 = combination(n, a);
  dis2 = combination(n, b);
  ans = modsubtraction(ans, dis1);
  ans = modsubtraction(ans, dis2);
  cout << ans << endl;
}
