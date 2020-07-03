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

int H, W, K;
vector<vector<int> > a;

void dfs(int res, vector<int> v) {
  if (res == 0)
    a.pb(v);
  else {
    for (int i = 1; i <= res; i++) {
      v.pb(i);
      dfs(res-i, v);
      v.pop_back();
    }
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  bool flag1 = false;
  bool flag2 = false;
  bool flag3;
  char s[10][1000];
  vector<int> b;
  cin >> H >> W >> K;
  rep(i, H) {
    rep(j, W) {
      cin >> s[i][j];
    }
  }
  dfs(H, b);
  int ans = INF;
  rep(i, a.size()) {
    int cnt = 0;
    vector<int> c(a[i].size(), 0);
    rep(l, W) {
      int j = a[i][0]-1;
      int k = 0;
      int n = 0;
      while(1) {
        for (int m = k; m <= l; m++) {
          if (s[m][l] == '0')
            c[n]++;
        }
        if (n == a[i].size()-1)
          break;
        else {
          n++;
          k = j+1;
          j += a[i][n];
        }
      }
      flag1 = false;
      rep(j, a[i].size)
        cout << c[i] << ' ';
      cout << endl;
      rep(j, a[i].size()) {
        if (c[j] > K) {
          if (flag1)
            flag2 = true;
          cnt++;
          rep(k, a[k].size())
            c[k] = 0;
          flag1 = true;
          flag3 = flag1;
        }
      }
      if (flag1)
        l--;
      if (flag2)
        break;
    }
    if (ans > cnt+a[i].size()-1)
      ans = cnt+a[i].size()-1;
    // ans = max(ans, cnt+a[i].size()-1);
  }
  // rep(i, a.size()) {
  //   rep(j, a[i].size()) {
  //     cout << a[i][j] << ' ';
  //   }
  //   cout << endl;
  // }
  cout << ans << endl;
}
