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
  cin >> N;
  ll sum = 1;
  vector<ll> A(N);
  ll m = 1000000000000000000;
  bool t = true;

  rep(i, N) {
    cin >> A[i];
  }
  sum = A[0];
  for(int i = 1; i < N; i++) {
    if (A[i] == 0) {
      sum = 0;
      t = true;
    }
    if (sum != 0) {
      if (m / sum < A[i])
        t = false;
      else
        sum *= A[i];
    }
  }
  if (t)
    cout << sum << endl;
  else
    cout << "-1" << endl;
}
