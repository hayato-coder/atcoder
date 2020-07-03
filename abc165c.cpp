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

vector<vector<int> > v;
int N, M, Q;

void dfs(int n, vector<int> s, int t) {
  if (n == N) {
    v.pb(s);
  }
  else {
    for (int i = t; i <= M; i++) {
      s.pb(i);
      dfs(n+1, s, s[s.size()-1]);
      s.pop_back();
    }
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> N >> M >> Q;
  vector<int> s;
  vector<vector<int> > a(Q, vector<int>(4));
  rep(i, Q) {
    rep(j, 4) {
      cin >> a[i][j];
    }
  }
  dfs(0, s, 1);
  // rep(i, v.size()) {
  //   rep(j, v[i].size()) {
  //     cout << v[i][j] << ' ';
  //   }
  //   cout << endl;
  // }
  ll ans = 0;
  rep (i, v.size()) {
  ll sum = 0;
  rep(j, Q) {
    if (v[i][a[j][1]-1]-v[i][a[j][0]-1] == a[j][2]) {
      sum += (ll)a[j][3];
    }
  }
  ans = max(ans, sum);
  }
  cout << ans << endl;
}
