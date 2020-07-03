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

  int N, Q, a;
  string S;
  cin >> N >> S >> Q;
  vector<map<char, int> > m(N);
  vector<int> ans;
  rep(i, N) {
    if (i >= 1)
      m[i] = m[i-1];
    m[i][S[i]]++;
    // for (auto ite = m[i].begin(); ite != m[i].end(); ite++)
    //   cout << ite->_1 << ' ' << ite->_2;
    // cout << endl;
  }
  rep(j, Q) {
    cin >> a;
    if (a == 1) {
      int i;
      char c;
      cin >> i >> c;
      i--;
      for (int k = i; k < N; k++) {
        m[k][S[i]]--;
        m[k][c]++;
      }
    }
    else {
      int l, r;
      cin >> l >> r;
      l-=2;
      r--;
      ans.pb(m[r].size()-m[l].size());
    }
  }
  rep(i, ans.size())
    cout << ans[i] << endl;
}
