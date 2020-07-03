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

map<ll, int> prime_factor(ll n) {
  map<ll, int> res;
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
  ll A, B;
  map<ll, int> p;
  int ans = 0;
  cin >> A >> B;
  ll n = gcd(A, B);
  p = prime_factor(n);
  for (auto i = p.begin(); i != p.end(); i++) {
    ans++;
  }
  cout << ans+1 << endl;
}
