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

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N;
  cin >> N;
  vector<ll> A(N);
  vector<bool> flag(N, true);
  vector<pair<ll, ll> > v(N);
  int M = N-1;
  int m = 0;
  ll ans = 0;
  rep (i, N) {
    cin >> A[i];
  }
  rep (i, N) {
    ll t1 = abs(A[i]*(i-m));
    ll t2 = abs(A[i]*(M-i));
    if (t1 > t2) {
      v[i]._1 = t1;
      v[i]._2 = m;
    }
    else {
      v[i]._1 = t2;
      v[i]._2 = M;
    }
  }
  rep (i, N) {
    pair<ll, ll> p;
    p._1 = -1;
    int tmp;
    rep(j, N) {
      if (flag[j]) {
        ll t1 = A[j]*abs(j-m);
        ll t2 = A[j]*abs(M-j);
        if (t1 > t2) {
          v[j]._1 = t1;
          v[j]._2 = m;
        }
        else {
          v[j]._1 = t2;
          v[j]._2 = M;
        }
        // cout << v[j]._1 << ' ' << v[j]._2 << endl;
        if (v[j]._1 > p._1) {
          p = v[j];
          tmp = j;
        }
      }
    }
    ans += p._1;
    if (p._2 == m) {
      m++;
    }
    else {
      M--;
    }
    flag[tmp] = false;
  }
  cout << ans << endl;
}
