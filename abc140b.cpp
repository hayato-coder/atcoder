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
  vector<int> A(N);
  vector<int> B(N);
  vector<int> C(N-1);
  rep(i, N) {
    cin >> A[i];
    A[i]--;
  }
  rep(i, N) {
    cin >> B[i];
  }
  rep(i, N-1) {
    cin >> C[i];
  }
  int sum = 0;
  rep(i, N) {
    if (i >= 1) {
      if (A[i] == A[i-1]+1)
        sum += C[A[i-1]];
    }
    sum += B[i];
  }
  cout << sum << endl;
}
