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
  int X, Y;
  cin >> N >> M;
  cin >> X >> Y;
  int n = 0;
  int m = 0;
  int cnt = 0;
  vector<int> a(N);
  vector<int> b(M);
  rep(i, N) {
    cin >> a[i];
  }
  rep(i, M) {
    cin >> b[i];
  }
  sort(all(a));
  sort(all(b));
  int t = 0;
  bool flag = true;
  while(1) {
    if (n == N+1 || m == M+1)
      break;
    else {
      if (flag) {
        if (a[n] >= t) {
          t = a[n]+X;
          n++;
          flag = false;
        }
        else {
          n++;
        }
      }
      else {
        if (b[m] >= t) {
          t = b[m]+Y;
          m++;
          flag = true;
          cnt++;
        }
        else {
          m++;
        }
      }
    }
    // cout << n << ' ' << m << ' '<< t << ' ' << flag << endl;
  }
  cout << cnt << endl;
}
