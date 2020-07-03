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

struct unionfind {
    vector<int> par;
    vector<int> rank;
    vector<int> number;
    unionfind(int N) : par(N), rank(N), number(N) {
        for(int i = 0; i < N; i++) {
          par[i] = i;
          rank[i] = 1;
          number[i] = 1;
        }
    }

    int root(int x) {
        if (par[x] == x) return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        if (rx == ry) return;
        if (rank[rx] < rank[ry]) {
          par[rx] = ry;
          number[ry] += number[rx];
        } else {
          par[ry] = rx;
          number[rx] += number[ry];
          if (rank[rx] == rank[ry])
            rank[rx]++;
        }
    }

    bool same(int x, int y) {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }

    int size(int x) {
      return rank[root(x)];
    }

    int size2(int x) {
      return number[root(x)];
    }
};

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, M, K, A, B, C, D;
  cin >> N >> M >> K;
  vector<vector<int> > f(N);
  vector<vector<int> > b(N);
  vector<int> c(N);
  unionfind tree(N);
  rep(i, M) {
    cin >> A >> B;
    A--;
    B--;
    f[A].pb(B);
    f[B].pb(A);
    tree.unite(A, B);
  }
  rep(i, K) {
    cin >> C >> D;
    C--;
    D--;
    b[C].pb(D);
    b[D].pb(C);
  }
  // rep(i, N) {
  //   cout << tree.size2(i) << ' ';
  // }
  // cout << endl;
  rep(i, N) {
    int temp = tree.size2(i);
    temp -= 1 + f[i].size();
    rep(j, b[i].size()) {
      if (tree.root(b[i][j]) == tree.root(i))
        temp -= 1;
    }
    cout << temp << ' ';
  }
  cout << endl;
}
