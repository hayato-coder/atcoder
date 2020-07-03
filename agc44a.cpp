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

  int T;
  rep (i, T) {
    ll N, D;
    vector<ll> V(4);
    cin >> N >> V[0] >> V[1] >> V[2];
    cin >> D;
    vector<ll> v(3);
    stack<pair<ll, ll> > s;
    a = v[0]/D;
    b = v[1]/(2*D);
    c = v[2]/(4*D);
    vector<pair<ll, ll> > t;
    t.pb(mp(v[0]*15, 0));
    t.pb(mp(v[1]*10, 1));
    t.pb(mp(v[2]*6, 2));
    sort(all(t));
    s.push(mp(1, D));
    while (!s.empty()) {
      p = s.top()._1;
      q = s.top()._2;
      s.pop();
      if (p < N) {
        for (int i = 0; i < 3; i++) {
          if ()
          s.push(mp());
        }
      }

    }
  }
  cout << N << endl;
}
