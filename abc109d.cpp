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

  int H, W;
  int a[505][505];
  cin >> H >> W;
  queue<pair<P, P> > que;
  int cnt = 0;
  rep(i, H) {
    rep(j, W) {
      cin >> a[i][j];
    }
  }
  rep(i, H) {
    rep(j, W) {
      if (a[i][j] % 2 == 1 ) {
        if (j == W-1 && i != H-1) {
          a[i][j]--;
          a[i+1][j]++;
          que.push(mp(mp(i+1, j+1), mp(i+2, j+1)));
          cnt++;
        }
        else if (j != W-1 || i != H-1) {
          a[i][j]--;
          a[i][j+1]++;
          que.push(mp(mp(i+1, j+1), mp(i+1, j+2)));
          cnt++;
        }
      }
    }
  }
  cout << cnt << endl;
  while(!que.empty()) {
    cout << que.front()._1._1 << ' ' << que.front()._1._2 << ' ' << que.front()._2._1 << ' ' << que.front()._2._2;
    cout << endl;
    que.pop();
  }
}
