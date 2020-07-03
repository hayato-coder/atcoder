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
#define DEBUG(x) cout << #x << ": " << x << endl;er
template<typename T> T gcd(T a, T b) { if (b == 0) return a; return gcd(b, a % b); }

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;
  int p, y;
  vector<pair<P, P> > v(M);
  rep(i, M) {
    cin >> p >> y;
    v[i]._1 = y;
    v[i]._2 = m;
    v[i]._3 = i;
  }
  sort(all(v));
  rep(i, M) {
    int temp = v[i]._1;
    v[i]._1 = v[i]._2;
    v[i]._2 = temp;
  }
  sort(all(v));
  cout << N << endl;
}
