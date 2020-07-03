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

  int N, X, Y;
  cin >> N >> X >> Y;
  vector<vector<P> > v(N-1);
  vector<int> a(N-1);
  rep(i, N-1) {
    for (int j = 1; j <= N-i-1; j++) {
      v[i].pb(mp(j, j+i+1));
    }
    a[i] = v[i].size();
  }
  // rep(i, N-1)
  //   cout << a[i] << endl;
  for (int i = 1; i < N-1; i++) {
    rep(j, v[i].size()) {
      if (v[i][j]._1 <= X && v[i][j]._2 >= Y) {
        a[i-(Y-X-1)]++;
        a[i]--;
      }
      else if (abs(v[i][j]._1-X)+abs(v[i][j]._2-Y)<i) {
        a[abs(v[i][j]._1-X)+abs(v[i][j]._2-Y)]++;
        a[i]--;
      }
    }
  }
  rep(i, N-1)
    cout << a[i] << endl;
}
