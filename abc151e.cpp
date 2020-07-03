#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (n); i++)
#define repto(i, n) for(int i = 0; i <= (n); i++)
#define all(c) (c).begin, (c).end()
#define uniq(c) c.erase(unique(all(c)), (c).end())
#define _1 first
#define _2 second
#define pb push_back
#define INF 1145141919
#define MOD 1000000007
#define DEBUG(x) cout << #x << ": " << x << endl;
template<typename T> T gcd(T a, T b) { if (b == 0) return a; return gcd(b, a % b); }

ll calcproduct(int n) {
  if (n == 0)
    return 1;
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

ll modsubtraction(ll a, ll b) {
  ll ans = (a - b) % MOD;
  if (ans < 0)
    ans += MOD;
  return ans;
}

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  vector<ll> C;
  rep(i, N) {
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  ll temp = calcproduct(K-1);
  ll tmp = temp;
  ll tmp2 = 1;
  rep(i, N-K+1) {
    ll a = tmp;
    ll b = mod_pow(temp, MOD-2);
    ll c = mod_pow(tmp2, MOD-2);
    C.pb(((a*b)%MOD*c)%MOD);
    tmp *= K+i;
    tmp %= MOD;
    tmp2 *= i+1;
    tmp2 %= MOD;
  }
  ll m1 = 0;
  ll m2 = 0;
  rep(i, N-K+1) {
    m1 += C[C.size()-1-i]*A[N-1-i];
    m1 %= MOD;
    m2 += C[C.size()-1-i]*A[i];
    m2 %= MOD;
  }
  cout << modsubtraction(m1, m2) << endl;
}
