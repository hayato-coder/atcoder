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
  int cnt = 3;
  map<ll, ll> m1;
  map<ll, ll> m2;
  m1 = prime_factor(N-1);
  m2 = prime_factor(N);
  ll sum = 1;
  for(auto ite = m1.begin(); ite != m1.end(); ite++) {
    sum *= (ite->_2+1);
  }
  for (ll i = 2; i*i <= N; i++) {
    if (N % i == 0) {
      if (i * i == N)
        sum++;
      else {
        ll t = N;
        while (t % i == 0) {
          t /= i;
        }
        if (t % i == 1)
         sum++;
      }
    }
  }
  cout << sum << endl;
}
