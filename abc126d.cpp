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

  int N;
  cin >> N;
  int u, v, w;
  vector<vector<P> > a(N);
  vector<int> seen(N, 2);
  queue<int> que;
  rep(i, N-1) {
    cin >> u >> v >> w;
    u--;
    v--;
    a[u].pb(make_pair(v, w));
    a[v].pb(make_pair(u, w));
  }
  int s = 0;
  que.push(s);
  seen[s] = 0;
  while (!que.empty()) {
    s = que.front();
    que.pop();
    rep(i, a[s].size()) {
      if (seen[a[s][i]._1] == 2) {
        if ((seen[s] == 1 && a[s][i]._2%2==0) || (seen[s] == 0 && a[s][i]._2%2)) {
          seen[a[s][i]._1] = 1;
          que.push(a[s][i]._1);
        }
        else {
          seen[a[s][i]._1] = 0;
          que.push(a[s][i]._1);
        }
      }
    }
  }
  rep(i, N) {
    cout << seen[i] << endl;
  }
}
