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
  ll ans = 0;
  cin >> N >> S;
  vector<vector<int> > v(N, vector<int>(3));
  rep(i, 3) {
    v[N-1][i] = 0;
  }
  for (int i = N-2; i >= 0; i--) {
    if (S[i+1] == 'R') {
      v[i][0] = v[i+1][0]+1;
      v[i][1] = v[i+1][1];
      v[i][2] = v[i+1][2];
    }
    if (S[i+1] == 'G') {
      v[i][0] = v[i+1][0];
      v[i][1] = v[i+1][1]+1;
      v[i][2] = v[i+1][2];
    }
    if (S[i+1] == 'B') {
      v[i][0] = v[i+1][0];
      v[i][1] = v[i+1][1];
      v[i][2] = v[i+1][2]+1;
    }
  }
  // rep (i, N) {
  //   rep(j, 3) {
  //     cout << v[i][j] << ' ';
  //   }
  //   cout << endl;
  // }
  rep (i, N-2) {
    if (S[i] == 'R') {
      for (int j = i+1; j < N-1; j++) {
        if (S[j] == 'G') {
          ll t = 0;
          if (j+j-i <= N-1) {
            if (S[j+j-i] == 'B')
              t = 1;
          }
          ans += (ll)v[j][2]-t;;
          // cout << '1' << endl;
        }
        if (S[j] == 'B') {
          ll t = 0;
          if (j+j-i <= N-1) {
            if (S[j+j-i] == 'G')
              t = 1;
          }
          ans += (ll)v[j][1]-t;
          // cout << '2' << endl;
        }
      }
    }
    if (S[i] == 'G') {
      for (int j = i+1; j < N-1; j++) {
        if (S[j] == 'R') {
          ll t = 0;
          if (j+j-i <= N-1) {
            if (S[j+j-i] == 'B')
              t = 1;
          }
          ans += (ll)v[j][2]-t;
          // cout << '3' << endl;
        }
        if (S[j] == 'B') {
          ll t = 0;
          if (j+j-i <= N-1) {
            if (S[j+j-i] == 'R')
              t = 1;
          }
          ans += (ll)v[j][0]-t;
          // cout << '4' << endl;
        }
      }
    }
    if (S[i] == 'B') {
      for (int j = i+1; j < N-1; j++) {
        if (S[j] == 'G') {
          ll t = 0;
          if (j+j-i <= N-1) {
            if (S[j+j-i] == 'R')
              t = 1;
          }
          ans += (ll)v[j][0]-t;
          // cout << '5' << endl;
        }
        if (S[j] == 'R') {
          ll t = 0;
          if (j+j-i <= N-1) {
            if (S[j+j-i] == 'G')
              t = 1;
          }
          ans += (ll)v[j][1]-t;
        }
      }
    }
  }
  cout << ans << endl;
}
