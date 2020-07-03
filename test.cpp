#include <iostream>
#include <algorithm>
#include <random>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int a[100][100];
  int c[100][100];
  double d[100][100];
  int pre[100][100];
  int N = 100;
  int u;
  int v;
  cout << "戦略1:" << endl;
  cin >> u;
  cout << "戦略2:" << endl;
  cin >> v;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      a[i][j] = rand()%100000;
      d[i][j] = 0.1;
      if (a[i][j] <= 9999)
        c[i][j] = 1;
      else
        c[i][j] = 0;
      // cout << c[i][j] << ' ';
    }
    // cout << endl;
  }
  for (int t = 1; t <= 30; t++) {
    cout << "time:" << t << endl;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        int cnt = 0;
        for (int k = max(i-1, 0); k <= min(i+1, N-1); k++) {
          for (int l = max(j-1, 0); l <= min(j+1, N-1); l++) {
            cnt++;
          }
        }
        if (c[i][j] == 1)
          cnt--;
        if (t >= 2)
          d[i][j] *= ((double)(pre[i][j]+1)/(cnt+1)*1.01);
        else
          d[i][j] /= (cnt+1);
        if (t == u)
          d[i][j] /= 2;
        pre[i][j] = cnt;
        a[i][j] = rand()%100000;
        if (a[i][j] <= (int)(d[i][j]*100000) && c[i][j] == 0)
          c[i][j] = 1;
      }
    }
    int ans = 0;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if (t == v) {
          int r = rand()%100000;
          if (r <= 9999)
            c[i][j] = 0;
        }
        if (c[i][j] == 1)
          ans++;
      }
    }
    cout << ans << endl;

  }
}
