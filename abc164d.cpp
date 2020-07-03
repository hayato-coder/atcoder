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
  ll ans;
  if (n == 1 || n== 0)
    ans = 0;
  else {
  ll a = calcproduct(n);
  ll b = calcproduct(k);
  ll c = calcproduct(n-k);
  b = mod_pow(b, MOD-2);
  c = mod_pow(c, MOD-2);
  ans = ((a*b)%MOD*c)%MOD;
  }
  return ans;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string S;
  cin >> S;
  int n = S.size();
  vector<int> f(2019, 0);
  f[0] = 1;
  int temp = 1;
  int c = 0;
  rep(i, n) {
    int t = (int)(S[n-1-i]-'0') * temp % 2019;
    c += t;
    c %= 2019;
    cout << c << ' ';
    cout << endl;
    f[c]++;
    temp *= 10;
    temp %= 2019;
  }
  ll ans = 0;
  // cout << combination(1, 2) << endl;
  rep(i, 2019) {
    // cout << f[i] << endl;
    ll a = ans;
    ans += combination(f[i], 2);
    // if (a != ans)
    //   cout << i << ' ' <<  ans << endl;
  }
  cout << ans << endl;
}
