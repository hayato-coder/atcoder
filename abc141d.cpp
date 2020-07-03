#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (n); i++)
#define repto(i, n) for(int i = 0; i <= (n); i++)
#define all(c) (c).begin, (c).end()
#define uniq(c) c.erase(unique(all(c)), (c).end())
#define _1 first
#define _2 second
#define pb push_back
#define INF 1145141919
#define MOD 1000000007
#define DEBUG(x) cout << #x << ": " << x << endl;
template<typename T> T gcd(T a, T b) { if (b == 0) return a; return gcd(b, a % b); }

int main() {
  int N, M;
  cin >> N >> M;
  int A;
  ll ans = 0;
  multiset<int> s;
  rep(i, N) {
    cin >> A;
    s.insert(A);
  }
  // for (auto i = s.begin(); i != s.end(); i++)
  //   cout << *i << ' ';
  // cout << endl;
  rep(i, M) {
    int temp = *(--s.end());
    s.erase(--s.end());
    s.insert(temp/2);
    // for (auto i = s.begin(); i != s.end(); i++)
    //   cout << *i << ' ';
    // cout << endl;
  }
  for (auto i = s.begin(); i != s.end(); i++) {
    // cout << *i << ' ';
    ans += (ll)*i;
  }
  cout << ans << endl;
}
