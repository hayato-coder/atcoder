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

  string s;
  vector<int> v;
  int cnt = 0;
  cin >> s;
  for (int i = s.size()-1; i >= 0; i--) {
    if (s[i] == 'B')
      cnt++;
    else if (s[i] != 'B' && cnt <= 0)
      v.pb(i);
    else
      cnt--;
  }
  for (int i = v.size()-1; i >= 0; i--)
    cout << s[v[i]];
  cout << endl;
}
