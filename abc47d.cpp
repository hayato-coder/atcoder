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

  int N, T;
  int s = 0;
  int t = 1;
  int temp;
  int cnt = 0;
  cin >> N >> T;
  T /= 2;
  vector<int> A(N);
  queue<int> que;
  rep(i, N) {
    cin >> A[i];
    if (i > 0 && A[t] < A[i]) {
      t = i;
    }
  }
  rep(i, N) {
    if (i >= 2 && i <= N-2) {
      if (A[i] >= A[i-1] && A[i] >= A[i+1] && i > t) {
        que.push(i);
      }
    }
    if (i == N-1 && A[i] >= A[i-1])
      que.push(i);
  }
  temp = A[t]-A[s];
  rep(i, N) {
    // cout << s << ' ' << t << ' '<< cnt << ' ' << temp << endl;
    if (A[t]-A[s] > temp) {
      temp = A[t]-A[s];
      cnt=1;
    }
    else if (A[t]-A[s] == temp) {
      cnt++;
    }
    if (t-s == 1) {
      if (que.empty())
        break;
      t = que.front();
      que.pop();
    }
    s++;
  }
  if (T < cnt)
    cout << T << endl;
  else
    cout << cnt << endl;
}
