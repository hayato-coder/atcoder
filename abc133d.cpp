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

  int N;
  cin >> N;
  vector<ll> A(N);
  ll sum = 0;
  rep(i, N) {
    cin >> A[i];
    sum += A[i];
  }
  sum /= 2;
  ll sum1 = 0;
  ll sum2 = 0;
  for (int i = 1; i < N-1; i+=2) {
    sum1 += A[i];
    sum2 += A[i+1];
  }
  int s1 = 1;
  int s2 = 2;
  rep(i, N) {
    if (i % 2 == 0) {
      cout << 2*(sum-sum1) << ' ';
      sum1 = sum1 + A[(s1+N-1)%N] - A[s1%N];
      // cout << A[(s1+N-3)%N] << ' ' << A[s1%N] << endl;
      // cout << sum1 << endl;
      s1 += 2;
    }
    else {
      cout << 2*(sum-sum2) << ' ';
      sum2 = sum2 + A[(s2+N-1)%N] - A[s2%N];
      s2 += 2;
    }
  }
  cout << endl;
  // cout << sum << ' ' << sum1 << ' ' << sum2 << endl;
}
