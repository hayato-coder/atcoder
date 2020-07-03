#include <bits/stdc++.h>
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
  string S;
  bool flag = true;
  cin >> S;
  rep(i, S.size()-1) {
    if (S[i] == S[i+1]) {
      flag = false;
      puts("Bad");
      break;
    }
  }
  if (flag)
    puts("Good");
}
