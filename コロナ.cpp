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

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  int s;
  int t;
  cin >> n >> s >> t;
  vector<ll> a(s, 0);
  vector<ll> b(t, 0);
  a[0] = 100;
  b[0] = 100;
  rep(i, n) {
    ll sum1 = 0;
    ll sum2 = 0;
    a[s-1] += a[s-2];
    b[t-1] += b[t-2];
    ll k1 = a[s-1]*9/10;
    ll k2 = b[t-1]*9/10;
    a[s-1] -= k1;
    b[t-1] -= k2;
    for (int j = s-3; j >= 0; j--) {
      a[j+1] = a[j];
      sum1 += a[j];
    }
    for (int j = t-3; j >= 0; j--) {
      b[j+1] = b[j];
      sum2 += b[j];
    }
    a[0] = sum1;
    b[0] = 0.2*sum2;
    rep(j, s) {
      cout << a[j] << ' ';
    }
    cout << (double)k1/(2*a[0]) << endl;
    rep(j, t) {
      cout << b[j] << ' ';
    }
    cout << (double)k2/(2*b[0]) << endl;
    cout << endl;
    // cout << a[0] << ' ' << a[s-1] << ' ' << k1 << endl;
    // cout << b[0] << ' ' << b[t-1] << ' ' << k2 << endl;
    // cout << endl;
  }
}
