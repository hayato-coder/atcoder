#include <iostream>
#include <queue>
#include <vector>
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
#define INF 114514191900000
#define MOD 1000000007
#define DEBUG(x) cout << #x << ": " << x << endl;

int main() {
  int N, Q, K;
  int a;
  int b;
  int c;
  int x[100005];
  int y[100005];
  ll d[100005];
  int s[100005];
  vector<P> v[100005];
  int t;
  queue<int> que;
  cin >> N;
  rep(i, N) {
    d[i] = INF;
    s[i] = 0;
  }
  rep(i, N-1) {
    cin >> a >> b >> c;
    a--;
    b--;
    v[a].push_back(make_pair(b, c));
    v[b].push_back(make_pair(a, c));
  }
  cin >> Q >> K;
  rep(i, Q) {
    cin >> x[i] >> y[i];
    x[i]--;
    y[i]--;
  }
  K--;

  que.push(K);
  d[K] = 0;
  while (!que.empty()) {
    t = que.front();
    que.pop();
    for (int i = 0; i < v[t].size(); i++) {
      int a1 = v[t][i].first;
      int a2 = v[t][i].second;
      if (s[a1] == 0) {
        que.push(a1);
        // cout << t << ' ' << a1 << ' ' << a2 << endl;
        if (d[a1]>d[t]+a2)
          d[a1] = d[t]+a2;
        // cout << a1 << endl;
        s[a1] = 1;
      }
    }
  }
  rep(i, Q) {
    cout << d[x[i]]+d[y[i]] << endl;
  }
  // rep (i, N) {
  //   cout << d[i] << endl;
  // }
}
