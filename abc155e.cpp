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

  string N;
  int ans = 0;
  cin >> N;
  if (N.size() == 1) {
    if (t <= 5)
      ans += t;
    else
      ans += 11 - t;
  }
  else {
    for (int i = 0; i < N.size(); i++) {
      int t = N[i]-'0';
      if (i == 0) {
        if (t <= 5) {
          ans += t;
        }
        else {
          if (N[i+1]-'0' >= 5) {
            ans += 9-t;
          }
          else
            ans += 11-t;
        }
      }
      else if (i == N.size()-1) {
        if (t <= 4) {
          ans += t;
        }
        else if (t == 5) {
          if (N[i-1]-'0' >= )
        }
      }
    }
  }
    // if (t <= 5) {
    //   if (i == 0)
    //     ans += t;
    //   else if (N[i-1]-'0' <= 4)
    //     ans += t;
    //   else if (t <= 4)
    //     ans += t;
    //   else
    //     ans += 11-t;
    // }
    // else {
    //   if (i == N.size()-1)
    //     ans += 11-t;
    //   else if (N[i+1]-'0' <= 4) {
    //     ans += 11-t;
    //   }
    //   else {
    //     ans += 9-t;
    //   }
    // }
    // cout << ans << endl;
  cout << ans << endl;
}
