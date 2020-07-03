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

map<ll, ll> prime_factor(ll n) {
  map<ll, ll> res;
  for (ll i = 2; i * i <= n; i++) {
    while(n % i == 0) {
      res[i]++;
      n /= i;
    }
  }
  if (n != 1)
    res[n] = 1;
  return res;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll N;
  cin >> N;
  map <ll, ll> m;
  m = prime_factor(N);

  int cnt = 0;
  for (auto ite = m.begin(); ite != m.end(); ite++) {
    for (int i = 1; i <= ite->_2; i++) {
      cnt++;
      if (i*(i+1) > ite->_2*2) {
        cnt--;
        break;
      }
    }
    // cout << ite->_1 << ' ' << ite->_2 << endl;
  }
  cout << cnt << endl;
}
