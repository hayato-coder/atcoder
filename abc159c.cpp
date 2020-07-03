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

  int H, W, K;
  int s[10][1000];
  cin >> H >> W >> K;
  rep(i, H) {
    rep(j, W) {
      cin >> s[i][j];
    }
  }
  int cnt = 0;
  int c1 = 0;
  rep(j, W) {
    int c2 = 0;
    repto(k, i) {
      if (s[k][j] == 0) {
        c2++;
      }
    }
    if ()
      c1 += c2;
    }
  }
}
