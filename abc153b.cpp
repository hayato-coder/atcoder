#include <iostream>
#include <vector>
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
  int H, N;
  int sum = 0;
  int A;
  cin >> H >> N;
  rep(i, N) {
    cin >> A;
    sum += A;
  }
  if (sum >= H)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
