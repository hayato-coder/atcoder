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
#define MOD 998244353
#define DEBUG(x) cout << #x << ": " << x << endl;
template<typename T> T gcd(T a, T b) { if (b == 0) return a; return gcd(b, a % b); }

ll calcproduct(int n) {
  ll ans = 1;
  for (int i = 1; i <= n; i++) {
    ans *= i;
    ans %= MOD;
  }
  return ans;
}

ll mod_pow(ll x, ll n) {
  if (n == 0) return 1;
  ll res = mod_pow(x * x % MOD, n / 2);
  if (n & 1) res = res * x % MOD;
  return res;
}

ll combination(int n, int k) {
  ll a = calcproduct(n);
  ll b = calcproduct(k);
  ll c = calcproduct(n-k);
  b = mod_pow(b, MOD-2);
  c = mod_pow(c, MOD-2);
  ll ans = ((a*b)%MOD*c)%MOD;
  return ans;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, M, K;
  cin >> N >> M >> K;
  ll a = calcproduct(N-1);
  ll b = calcproduct(N-1);
  ll c = 1;
  ll sum = 0;
  ll tmp;
  repto (i, K) {
    ll p = a;
    ll q = mod_pow(b, MOD-2);
    ll r = mod_pow(c, MOD-2);
    ll t = mod_pow(M-1, N-1-i);
    tmp = ((((p*q)%MOD*r)%MOD*M)%MOD*t)%MOD;
    sum += tmp;
    sum %= MOD;
    p = mod_pow(N-1-i, MOD-2);
    b *= p;
    b %= MOD;
    c *= i+1;
    c %= MOD;
    // cout << sum << endl;
  }
  cout << sum << endl;
}
