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
  vector<int> A(N);
  map<int, int> m;
  // bool flag = false;
  ll m1 = 0;
  // int m2 = 0;
  rep(i, N) {
    cin >> A[i];
    m[A[i]]++;
  }
  for (auto ite = m.begin(); ite != m.end(); ite++) {
    // cout << ite->_1 << ' ' << ite->_2 << endl;
    m1 += (ll)(ite->_2)*(ite->_2-1)/2;
  }
  // for (auto ite = m.begin(); ite != m.end(); ite++) {
  //   if (ite->_1 != m2) {
  //     if (m1 == ite->_2)
  //       flag = true;
  //   }
  // }
  // cout << m1 << endl;
  rep(i, N) {
    cout << m1-(ll)m[A[i]]*(m[A[i]]-1)/2+(ll)(m[A[i]]-2)*(m[A[i]]-1)/2 << endl;
  }
}
