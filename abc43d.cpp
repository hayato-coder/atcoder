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
  vector<int> a(30);
  bool flag = true;
  cin >> s;
  rep(i, 30)
    a[i] = 0;
  rep(i, s.size()-1) {
    if (a[s[i]-'a'] > 0) {
      flag = false;
      cout << a[s[i]-'a']+1 << ' ' << i+1 << endl;
      break;
    }
    else {
      a[s[i]-'a'] = i;
    }
    rep(j, 30) {
      if (a[s[i]-'a'] > 0) {
        if (a[s[i]-'a']-i >= 2*a[s[i]-'a']._2+1)
          a[s[i]-'a']._2 = 0;
      }
    }
  }
  if (flag)
    cout << "-1 -1" << endl;
}
