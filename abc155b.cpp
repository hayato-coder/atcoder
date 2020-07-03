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
  bool flag = true;
  cin >> N;
  vector<int> A(N);
  rep(i, N)
    cin >> A[i];
  rep(i, N) {
    if (A[i] % 2 == 0) {
      if (A[i] % 3 != 0 && A[i] % 5 != 0) {
        flag = false;
        cout << "DENIED" << endl;
        break;
      }
    }
  }
  if (flag)
    cout << "APPROVED" << endl;
}
