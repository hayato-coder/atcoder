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

  int K;
  queue<ll> que;
  cin >> K;
  for (ll i = 1; i < 10; i++) {
    que.push(i);
  }
  if (K <= 9)
    cout << K << endl;
  int cnt = 9;
  while (cnt < K) {
    ll p = que.front();
    que.pop();
    int t = p%10;
    for (int i = max(t-1, 0); i <= min(t+1, 9); i++) {
      que.push(p*10+i);
      cnt++;
      if (cnt == K)
        cout << p*10+i << endl;
     }
  }
}
