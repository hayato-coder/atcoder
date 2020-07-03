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

int division(int x, int y) {
  if (x % y == 0)
    return x / y;
  else
    return x / y + 1;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, D, A;
  cin >> N >> D >> A;
  int X, H;
  vector<P> V(N);
  ll ans = 0;
  rep(i, N) {
    cin >> X >> H;
    V[i] = make_pair(X, H);
  }
  sort(all(V));
  int s = 0;
  int t = 0;
  vector<int> C(N);
  while(1) {
    while ((V[t]._1 - V[s]._1) <= 2 * D) {
      t++;
      if (t == N)
        break;
    }
    C[s] = --t;
    s++;
    if (s == N)
      break;
  }
  // rep(i, N)
  //   cout << C[i] << endl;
  s = 0;
  t = 0;
  vector<int> d(N);
  rep(i, N) {
    int temp = (V[i]._2+A-1)/A*A;
    if (i == 0)
      d[i] = temp;
    else
      
  }
  // rep(i, N) {
  //   if (V[i]._2 <= 0)
  //     i++;
  //   else {
  //     ans += (ll)division(V[i]._2, A);
  //     int temp = A*(division(V[i]._2, A));
  //     int j = i;
  //     while(1) {
  //       if (j >= N || V[j]._1 > V[i]._1+2*D)
  //         break;
  //       else {
  //         V[j]._2 -= temp;
  //         j++;
  //       }
  //     }
  //   }
  // }
  // cout << ans << endl;
  // rep(i, N)
  //   cout << V[i].first << ' ' << V[i].second << endl;
}
