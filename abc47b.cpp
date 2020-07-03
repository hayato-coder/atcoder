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

  int W, H, N;
  cin >> W >> H >> N;
  int w = 0;
  int h = 0;
  rep (i, N) {
    int x, y, a;
    cin >> x >> y >> a;
    if (a == 1) {
      if (w < x)
        w = x;
    }
    else if (a == 2) {
      if (W > x)
        W = x;
    }
    else if (a == 3) {
      if (h < y)
        h = y;
    }
    else {
      if (H > y)
        H = y;
    }
  }
  if (w > W || h > H)
    cout << '0' << endl;
  else
    cout << (W-w)*(H-h) << endl;
}
