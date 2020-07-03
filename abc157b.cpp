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

  int A[3][3];
  bool a[3][3];
  int N, b;
  rep(i, 3) {
    rep(j, 3) {
      cin >> A[i][j];
      a[i][j] = false;
    }
  }
  cin >> N;
  rep(i, N) {
    cin >> b;
    rep(j, N) {
      rep(l, N) {
        if (A[j][l] == b) {
          a[j][l] =true;
          break;
        }
      }
    }
  }
  if ((a[0][0] && a[0][1] && a[0][2]) ||
      (a[1][0] && a[1][1] && a[1][2]) ||
      (a[2][0] && a[2][1] && a[2][2]) ||
      (a[0][0] && a[1][0] && a[2][0]) ||
      (a[0][1] && a[1][1] && a[1][1]) ||
      (a[0][2] && a[1][2] && a[2][2]) ||
      (a[0][0] && a[1][1] && a[2][2]) ||
      (a[2][0] && a[1][1] && a[0][0]))
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
}
