#include <iostream>
#include <cmath>
using namespace std;

typedef pair<int, int> P;
typedef long long ll;

#define rep(i, n) for(int i = 0; i < (n); i++)
#define repto(i, n) for(int i = 1; i <= (n); i++)
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
  int v[10];
  int cnt = 0;
  cin >> N;
  int temp = N;
  int ans = 0;
  int sum = 0;
  int c[11][11];
  rep(i, 10) {
    rep(j, 10) {
      c[i][j] = 0;
    }
  }
  repto(i, N) {
    int a, b;
    int temp = i;
    b = temp % 10;
    while(temp) {
      a = temp;
      temp /= 10;
    }
    c[a][b]++;
  }
  repto(i, 9) {
    for (int j = i; j <= 9; j++) {
      if (i == j) {
        ans += c[i][j]*c[i][j];
      }
      else {
        ans += 2*c[i][j]*c[j][i];
      }
    }
  }
  cout << ans << endl;
}
