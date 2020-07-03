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

  int N, Q;
  cin >> N;
  map<ll, ll> m;
  vector<ll> A(N);
  rep(i, N) {
    cin >> A[i];
    m[A[i]]++;
  }
  ll ans = 0;
  for (auto ite = m.begin(); ite != m.end(); ite++) {
    // cout << ite->_1 << ' ' << ite->_2 << endl;
    ans += ite->_1 * ite->_2;
  }
  cin >> Q;
  vector<ll> B(Q);
  vector<ll> C(Q);
  rep(i, Q) {
    cin >> B[i] >> C[i];
  }
  rep(i, Q) {
    m[C[i]] += m[B[i]];
    ans += (C[i]-B[i])*m[B[i]];
    m.erase(B[i]);
    cout << ans << endl;
  }
}
