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
  queue<string> que;
  cin >> N;
  que.push("a");
  while (!que.empty()) {
    string s = que.front();
    que.pop();
    if (s.size() == N)
      cout << s << endl;
    else {
      set<char> t;
      rep(i, s.size()) {
        t.insert(s[i]);
      }
      // cout << *(--s.end()) << ' ' << (char)(*(--s.end())+1) << endl;
      t.insert((char)(*(--t.end())+1));
      // for (auto ite = t.begin(); ite != t.end(); ite++)
      //   cout << *ite << ' ';
      // cout << endl;
      for (auto ite = t.begin(); ite != t.end(); ite++) {
        string v;
        v = s + *ite;
        que.push(v);
      }
    }
  }
}
