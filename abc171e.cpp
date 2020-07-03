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
  vector<int> a(N);
  vector<vector<int> > v(N);
  rep(i, N) {
    cin >> a[i];
  }
  rep(i, N) {
    rep(j, 30) {
      if (a[i] != 0) {
        v[i].pb(a[i]%2);
        a[i] /= 2;
      }
      else
        v[i].pb(0);
    }
  }
  vector<int> s(30);
  rep(i, 30) {
    s[i] = v[0][i];
  }
  rep(j, 30) {
    for (int i = 1; i < N; i++) {
      s[j] ^= v[i][j];
    }
  }
  vector<vector<int> > b(N, vector<int>(30));
  vector<int> ans(N, 0);
  rep(i, N) {
    int cnt = 1;
    rep(j, 30) {
      b[i][j] = s[j]^v[i][j];
      ans[i] += b[i][j]*cnt;
      cnt *= 2;
    }
    cout << ans[i] << ' ';
  }
  cout << endl;
}
