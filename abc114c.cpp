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

  ll N;
  queue<int> q;
  vector<ll> v;
  int cnt = 0;
  cin >> N;
  q.push(3);
  q.push(5);
  q.push(7);
  while(q.front() <= N) {
    int p = q.front();
    v.pb(p);
    q.pop();
    q.push(p*10+3);
    q.push(p*10+5);
    q.push(p*10+7);
  }
  rep(i, v.size()) {
    bool flag3 = false;
    bool flag5 = false;
    bool flag7 = false;
    while (v[i] != 0) {
      if (v[i] % 10 == 3)
        flag3 = true;
      else if (v[i] % 10 == 5)
        flag5 = true;
      else
        flag7 = true;
      v[i] /= 10;
    }
    if (flag3 && flag5 && flag7)
      cnt++;
  }
  cout << cnt << endl;
}
