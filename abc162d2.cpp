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

  int N;
  string S;
  ll cnt = 0;
  cin >> N >> S;
  vector<int> v1;
  vector<int> v2;
  vector<int> v3;
  rep (i, N) {
    if (S[i] == 'R')
      v1.pb(i);
    if (S[i] == 'G')
      v2.pb(i);
    if (S[i] == 'B')
      v3.pb(i);
  }
  rep (i, N-2) {
    for (int j = i; j < N-1; j++) {
      int k = 2*j-i;
      if (k <= N-1 && S[i] != S[j] && S[j] != S[k] && S[i] != S[k])
        cnt++;
    }
  }
  cout << (ll)v1.size()*v2.size()*v3.size()-cnt << endl;
}
