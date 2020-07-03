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

  ll N;
  cin >> N;
  ll ans = 1;
  ll sum = 1;
  int cnt = 1;
  for(int i = 1; i < 15; i++) {
    if (ans+sum*26 > N)
      break;
    else {
      sum *= 26;
      ans += sum;
      cnt++;
    }
  }
  // cout << ans << endl;
  ans = N-ans;
  vector<int> a;
  rep(i, cnt) {
    if (ans != 0) {
      a.pb(ans%26);
      ans /= 26;
    }
    else
      a.pb(0);
  }
  for(int i = a.size()-1; i >= 0; i--) {
    // cout << a[i];
    cout << char('a'+a[i]);
  }
  cout << endl;
}
