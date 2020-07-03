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

  string s;
  string a, b, c;
  cin >> a >> b >> c;
  int cnt1 = 0;
  int cnt2 = 0;
  int cnt3 = 0;
  int cnt4 = 0;
  int cnt5 = 0;
  int cnt6 = 0;
  rep(i, min(a.size(),b.size())) {
    int cnt = 0;
    repto(j, i) {
      if (a[j] == b[b.size()-1-i+j] || a[j] == '?' || b[b.size()-1-i+j] == '?') {
        cnt++;
      }
      else
        break;
    }
    cnt1 = max(cnt1, cnt);
  }
  rep(i, min(a.size(),b.size())) {
    int cnt = 0;
    repto(j, i) {
      if (b[j] == a[a.size()-1-i+j] || b[j] == '?' || a[a.size()-1-i+j] == '?') {
        cnt++;
      }
      else
        break;
    }
    cnt2 = max(cnt2, cnt);
  }
  rep(i, min(b.size(),c.size())) {
    int cnt = 0;
    repto(j, i) {
      if (b[j] == c[c.size()-1-i+j] || b[j] == '?' || c[c.size()-1-i+j] == '?') {
        cnt++;
      }
      else
        break;
    }
    cnt3 = max(cnt3, cnt);
  }
  rep(i, min(b.size(),c.size())) {
    int cnt = 0;
    repto(j, i) {
      if (c[j] == b[b.size()-1-i+j] || c[j] == '?' || b[b.size()-1-i+j] == '?') {
        cnt++;
      }
      else
        break;
    }
    cnt4 = max(cnt4, cnt);
  }
  rep(i, min(a.size(),c.size())) {
    int cnt = 0;
    repto(j, i) {
      if (a[j] == b[b.size()-1-i+j] || a[j] == '?' || b[b.size()-1-i+j] == '?') {
        cnt++;
      }
      else
        break;
    }
    cnt5 = max(cnt5, cnt);
  }
  rep(i, a.size()) {
    if (c[i] == a[a.size()-1-i] || c[i] == '?' || a[a.size()-1-i] == '?') {
      cnt6++;
    }
    else
      break;
  }
  cout << cnt1 << ' ' << cnt2 << ' ' << cnt3 << ' ' << cnt4 << ' ' << cnt5 << ' ' << cnt6 << endl;
}
