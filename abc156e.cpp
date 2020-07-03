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

  ll n, k;
  cin >> n >> k;
  if (k >= n-1) {
    cout << combination(2*n-1, n-1) << endl;
  }
  else {
    ll ans = 0;
    ll a = 1;
    ll b = 1;
    ll c = 1;
    ll d;
    repto(i, k) {
      if (i >= 1) {
        a = a * (n-i+1) % MOD;
        b = b * (n-i) % MOD;
        c = c * i % MOD;
      }
      d = mod_pow(c, MOD-2);
      ans += (a*d%MOD)*(b*d%MOD)%MOD;
      ans %= MOD;
    }
    cout << ans << endl;
  }
}
