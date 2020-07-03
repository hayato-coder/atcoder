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

  int N;
  cin >> N;
  vector<int> A(N);
  rep (i, N) {
    cin >> A[i];
  }
  map<int, int> m1;
  map<int, int> m2;
  int m = 0;
  rep(i, N) {
    m1[abs(A[i]+i)]++;
    if (A[i]-i<0) {
      m2[abs(A[i]-i)]++;
    }
    // else {
    //   m++;
    // }
  }
  ll ans = 0;
  for (auto ite = m1.begin(); ite != m1.end(); ite++) {
    ans += (ll)ite->_2*m2[ite->_1];
    // cout << ite->_1 << ' ' << ite->_2 << ' ' << m2[ite->_1] << endl;
  }
  // ans += m*(m-1)/2;
  cout << ans << endl;
}
