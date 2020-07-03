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

  int X, Y, A, B, C;
  cin >> X >> Y >> A >> B >> C;
  vector<int> p(A);
  vector<int> q(B);
  vector<int> r(C);
  rep(i, A)
    cin >> p[i];
  rep(i, B)
    cin >> q[i];
  rep(i, C)
    cin >> r[i];
  sort(all(p));
  sort(all(q));
  sort(all(r));
  int a = A-1;
  int b = B-1;
  int c = C-1;
  int x = 0;
  int y = 0;
  ll ans = 0;
  while (x != X || y != Y) {
    if (p[a] >= q[b] && p[a] >= r[c] && x < X) {
      ans += (ll)p[a];
      x++;
      a--;
    }
    else if (r[c] >= q[b] && r[c] >= p[a] && y < Y) {
      ans += (ll)r[c];
      y++;
      c--;
    }
    else {
      if (p[a] >= r[c] && y < Y) {
        y++;
        ans += (ll)q[b];
        b--;
      }
      else if (p[a] <= r[c] && x < X){
        x++;
        ans += (ll)q[b];
        b--;
      }
      else if (x < X) {
        ans += (ll)p[a];
        x++;
        a--;
      }
      else if (y < Y){
        ans += (ll)r[c];
        y++;
        c--;
      }
    }
    cout << ans << endl;
  }
  cout << ans << endl;
}
