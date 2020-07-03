#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (n); i++)
#define repto(i, n) for(int i = i+1; i < (n); i++)
#define all(c) (c).begin, (c).end()
#define uniq(c) c.erase(unique(all(c)), (c).end())
#define _1 first
#define _2 second
#define pb push_back
#define INF 1145141919
#define MOD 1000000007
#define DEBUG(x) cout << #x << ": " << x << endl;
template<typename T, typename M> T gcd(T a, M b) { if (b == 0) return a; return gcd(b, a % b); }

map<int, int> prime_factor(int n) {
  map<int, int> res;
  for (int i = 2; i * i <= n; i++) {
    while(n % i == 0) {
      res[i]++;
      n /= i;
    }
  }
  if (n != 1)
    res[n] = 1;
  return res;
}

ll mod_pow(ll x, ll n) {
  if (n == 0) return 1;
  ll res = mod_pow(x * x % MOD, n / 2);
  if (n & 1) res = res * x % MOD;
  return res;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  int N;
  ll ans = 0;
  cin >> N;
  vector <int> A(N);
  map<int, int> tmp;
  map<int, int> m;
  rep(i, N) {
    cin >> A[i];
    tmp = prime_factor(A[i]);
    for (auto j = tmp.begin(); j != tmp.end(); j++) {
      if (m[j->_1] < j->_2)
        m[j->_1] = j->_2;
    }
  }
  ll t = 1;
  for (auto j = m.begin(); j != m.end(); j++) {
    t *= mod_pow((ll)j->_1, (ll)j->_2);
    t %= MOD;
  }
  rep(i, N) {
    ll temp = t;
    temp *= mod_pow((ll)A[i], MOD-2);
    temp %= MOD;
    // cout << temp << endl;
    ans += temp;
    ans %= MOD;
  }
  cout << ans << endl;
}
