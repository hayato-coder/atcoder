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

  ll K;
  int N;
  cin >> K >> N;
  ll sum = 0;
  ll a;
  vector<ll> A(N);
  vector<ll> B(N);
  rep(i, N) {
    cin >> A[i];
    if (i >= 1)
      B[i-1] = A[i]-A[i-1];
  }
  rep(i, N-1) {
    sum += B[i];
  }
  B[N-1] = K-sum;
  sort(all(B));
  K -= B[N-1];
  cout << K << endl;
}
