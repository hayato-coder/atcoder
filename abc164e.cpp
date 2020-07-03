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

  int N, M;
  ll S;
  cin >> N >> M >> S;
  vector<vector<pair<int, pair<ll, ll> > > > v(N);
  vector<pair<ll, ll> > u(N);
  rep (i, M) {
    int U, V;
    ll A, B;
    cin >> U >> V >> A >> B;
    U--;
    V--;
    v[U].pb(mp(V, mp(A, B)));
    v[V].pb(mp(U, mp(A, B)));
  }
  rep(i, N) {
    ll C, D;
    cin >> C >> D;
    u[i] = mp(C, D);
  }
  // rep(i, N) {
  //   rep (j, v[i].size()) {
  //     cout << v[i][j]._1 << ' '<< v[i][j]._2._1 << ' ' << v[i][j]._2._2 << endl;
  //   }
  //   cout << endl;
  //   cout << u[i]._1 << ' ' << u[i]._2 << endl;
  //   cout << endl;
  // }
  vector<pair<ll, ll> > d(N);
  vector<bool> t(N);
  d[0] = mp(0, S);
  int s = 0;
  rep(i, N) {
    rep(j, v[i].size()) {
      v[i][j]._1
    }
  }
}
