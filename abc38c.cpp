#include <iostream>

using namespace std;

typedef pair<int, int> P;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (n); i++)
#define repto(i, n) for(int i = 0; i <= (n); i++)
#define all(c) (c).begin, (c).end()
#define uniq(c) c.erase(unique(all(c)), (c).end())
#define _1 first
#define _2 second
#define pb push_back
#define INF 1145141919
#define MOD 1000000007
#define DEBUG(x) cout << #x << ": " << x << endl;

int main() {
  int N;
  int a[100005];
  ll cnt = 0;
  int t = 0;
  ll ans = 0;
  cin >> N;
  rep(i, N)
    cin >> a[i];
  rep(i, N) {
    if (t < a[i]) {
      cnt+= 1;
    }
    else {
      ans += (1+cnt)*cnt/2;
      cnt = 1;
    }
    t = a[i];
  }
  ans += (1+cnt)*cnt/2;
  cout << ans << endl;
}
