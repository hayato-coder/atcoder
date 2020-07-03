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
  vector<ll> v1(N);
  vector<ll> v2(N);
  ll ans;
  rep (i, N) {
    cin >> v1[i] >> v2[i];
  }
  sort(all(v1));
  sort(all(v2));
  if (N % 2) {
    int t = (N-1)/2;
    ans = v2[t]-v1[t]+1;
  }
  else {
    int t1 = N/2-1;
    int t2 = N/2;
    ans = v2[t1]+v2[t2]-v1[t1]-v1[t2]+1;
  }
  cout << ans << endl;
}
