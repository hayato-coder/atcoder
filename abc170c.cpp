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

  set<int> s;
  int X, N;
  int p;
  cin >> X >> N;
  for (int i = -1000; i <= 1000; i++)
    s.insert(i);
  rep(i, N) {
    cin >> p;
    s.erase(p);
  }
  // if (s.lower_bound(X) == s.begin())
  //   cout << *s.lower_bound(X) << endl;
  // else {
  int s1 = *s.lower_bound(X);
  int s2 = *(--s.lower_bound(X));
  if (s1-X >= X-s2)
    cout << s2 << endl;
  else
    cout << s1 << endl;
  // }
}
