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

  string S;
  int Q;
  bool flag = true;
  cin >> S >> Q;
  rep(i, Q) {
    int T;
    cin >> T;
    if (T == 1) {
      if (flag)
        flag = false;
      else
        flag = true;
    }
    else {
      int F;
      char C;
      cin >> F >> C;
      if ((F == 1 && flag == false) || (F == 2 && flag == true)) {
        S.pb(C);
      }
      else
        S.insert(S.begin(), C);
    }
  }
  if (flag == true) {
    cout << S << endl;
  }
  else {
    for (int i = S.size()-1; i >= 0; i--)
      cout << S[i];
    cout << endl;
  }
}
