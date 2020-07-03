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

  int N, M;
  cin >> N >> M;
  vector<int> a(N);
  vector<int> b(N);
  vector<vector<int> > c(N-1);
  rep(i, M) {
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
    for (int j = a[i]; j < b[i]; j++) {
      c[j].pb(i);
    }
  }
  rep(i, N-1) {
    rep(j, c[i].size()) {
      cout << c[i][j] << ' ';
    }
    cout << endl;
  }
}
