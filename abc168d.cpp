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
  cin >> N >> M;
  vector<vector<int> > v(N);
  queue<int> que;
  rep(i, M) {
    int A, B;
    cin >> A >> B;
    A--;
    B--;
    v[B].pb(A);
    v[A].pb(B);
  }
  // rep (i, v.size()) {
  //   rep(j, v[i].size()) {
  //     cout << v[i][j] << ' ';
  //   }
  //   cout << endl;
  // }
  int p = 0;
  int cnt = N-1;
  vector<int> ans(N);
  vector<bool> seen(N, true);
  que.push(p);
  while (!que.empty()) {
    p = que.front();
    que.pop();
    for (int i = 0; i < v[p].size(); i++) {
      int t = v[p][i];
      if (seen[t] == true) {
        que.push(t);
        seen[t] = false;
        ans[t] = p;
        cnt--;
      }
    }
  }
  if (cnt > 0) {
    cout << "No" << endl;
    // cout << cnt << endl;
    // for (int i = 1; i < N; i++) {
    //   cout << ans[i]+1 << endl;
    // }
  }
  else {
    cout << "Yes" << endl;
    for (int i = 1; i < N; i++) {
      cout << ans[i]+1 << endl;
    }
  }
}
