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

  int N;
  cin >> N;
  vector<ll> A(N);
  vector<ll> B(N);
  rep(i, N) {
    cin >> A[i] >> B[i];
  }
  vector<ll> v1(N);
  vector<ll> v2(N);
  rep(i, N) {
    v1[i] = A[i]*mod_pow(B[i], MOD-2)%MOD;
    v2[i] = B[i]*mod_pow(A[i], MOD-2)%MOD;
  }
  map<ll, ll> m1;
  map<ll, ll> m2;
  rep(i, N) {
    if (m1.count(-v2[i])) {
      m2[-v2[i]]++;
    }
    else
      m2[v1[i]]++;
    m1[v1[i]]++;
  }
  vector<int> v(N+1, 0);
  for (auto ite = m2.begin(); ite != m2.end(); ite++) {
    v[ite->_2]++;
  }
  ll ans = 1;
  for (int i = 1; i <= N; i++) {
    if (v[i] != 0) {
      rep(j, v[i]) {
        ans *= i+1;
        ans %= MOD;
      }
    }
  }
  if (ans == 0)
    cout << MOD-1 << endl;
  else
    cout << ans-1 << endl;
  // for (auto ite = m2.begin(); ite != m2.end(); ite++) {
  //   cout << ite->_1 << ' ' << ite->_2 << endl;
  // }
}
