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
  int P[200005];
  int cnt = INF;
  int ans = 0;
  cin >> N;
  rep(i, N) {
    cin >> P[i];
    if (P[i] < cnt)
      cnt = P[i];
    else
      ans++;
  }
  cout << N-ans << endl;
}
