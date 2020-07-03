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

vector<vector<int> > a;
int N, M, X;

void dfs(int res, vector<int> v) {
  if (res == N)
    a.pb(v);
  else {
      v.pb(res);
      dfs(res+1, v);
      v.pop_back();
      dfs(res+1, v);
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> N >> M >> X;
  vector<int> C(N);
  vector<vector<int> > A(N, vector<int>(M));
  vector<int> s;
  rep (i, N) {
    cin >> C[i];
    rep (j, M) {
      cin >> A[i][j];
    }
  }
  dfs(0, s);
  int ans = INF;
  rep (i, a.size()-1) {
    int sum = 0;
    bool flag = true;
    vector<int> sum1(M, 0);
    rep (j, a[i].size()) {
      sum += C[a[i][j]];
      rep(k, M) {
        sum1[k] += A[a[i][j]][k];
        if (j == a[i].size()-1) {
          // cout << sum1[k] << ' ';
          if (sum1[k] < X) {
            flag = false;
          }
        }
        // cout << sum1[k] << ' ';
      }
      // cout << endl;
      // cout << sum;
      // cout << endl;
    }
    if (flag)
      ans = min(ans, sum);
      // cout << ans  << ' '<< sum << endl;
  }
  if (ans < INF)
    cout << ans << endl;
  else
    cout << "-1" << endl;
  // rep(i, a.size()) {
  //   rep(j, a[i].size())
  //     cout << a[i][j] << ' ';
  //   cout << endl;
  // }
  // cout << a.size() << endl;
}
