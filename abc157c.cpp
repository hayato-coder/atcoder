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

  int N, M;
  bool flag = true;
  cin >> N >> M;
  vector<int> S(N);
  int s, c;
  rep(i, N)
    S[i] = 10;
  rep(i, M) {
    cin >> s >> c;
    s--;
    if (s == 0 && c == 0 && N != 1) {
      cout << "-1" << endl;
      flag = false;
      break;
    }
    if (S[s] == 10 || S[s] == c)
      S[s] = c;
    else {
      cout << "-1" << endl;
      flag = false;
      break;
    }
  }
  if (flag) {
    rep(i, N) {
      if (S[i] == 10) {
        if (i == 0 && N != 1)
          S[i] = 1;
        else
          S[i] = 0;
      }
      cout << S[i];
    }
    cout << endl;
  }
}
