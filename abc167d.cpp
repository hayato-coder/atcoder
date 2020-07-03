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

  ll N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, N) {
    cin >> A[i];
    A[i]--;
  }
  int cnt = 0;
  int a = 0;
  map<int, int> m;
  int p, q;
  while(1) {
    m[a] = cnt;
    a = A[a];
    cnt++;
    if (m.count(a)) {
      p = cnt - m[a];
      q = m[a];
      break;
    }
  }
  // cout << p << ' ' << q << endl;
  // cout << cnt << endl;
  int s = 0;
  if (K < q) {
    rep(i, (int)K) {
      s = A[s];
    }
    cout << s+1 << endl;
  }
  else {
    int t = (K-q)%p;
    s = a;
    rep(i, (int)t) {
      s = A[s];
    }
    cout << s+1 << endl;
  }

}
