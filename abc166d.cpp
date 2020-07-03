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

  ll X;
  cin >> X;
  for (int i = 0; i <= 1000; i++) {
    for (int j = i; j <= 1000; j++) {
      ll sum1 = 1;
      ll sum2 = 1;
      rep (k, 5) {
        sum1 *= (ll)i;
        sum2 *= (ll)j;
      }
      if (sum1 + sum2 == X) {
        cout << j << ' ' << -i << endl;
        break;
      }
      else if (sum2 - sum1 == X) {
        cout << j << ' ' << i << endl;
        break;
      }
    }
  }
}
