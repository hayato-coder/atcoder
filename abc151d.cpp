#include <iostream>
#include <queue>
using namespace std;
#define INF 1000000000

queue<pair<int, int> > que;
pair<int, int> p;

int main(){
  int i, j, k, l, n, m, o;
  int sx, sy;
  int gx, gy;
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, 1, 0, -1};
  int d[100][100];
  int N, M;
  char s[100][101];
  int ans = 0;

  cin >> N >> M;
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      cin >> s[i][j];
      d[i][j] = INF;
    }
  }
  for(o = 0; o < N; o++) {
    for (j = 0; j < M; j++) {
      for (k = 0; k < N; k++) {
        for (l = 0; l < M; l++) {
          for (n = 0; n < N; n++) {
            for (m = 0; m < M; m++) {
              d[n][m] = INF;
            }
          }
          sx = o;
          sy = j;
          gx = k;
          gy = l;
          if (s[sx][sy]=='#' || s[gx][gy]=='#')
            continue;
          que.push(make_pair(sx, sy));
          d[sx][sy] = 0;
          while(que.size()) {
            p = que.front();
            que.pop();
            if (s[p.first][p.second] == 'G')
              break;
            for (i = 0; i < 4; i++) {
              int nx = p.first+dx[i];
              int ny = p.second+dy[i];
              if (s[nx][ny] != '#' && d[nx][ny] == INF && nx >= 0 && nx < N && ny >= 0 && ny < M) {
                que.push(make_pair(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
              }
            }
          }
          if (ans < d[gx][gy])
            ans = d[gx][gy];
        }
      }
    }
  }
  cout << ans << endl;
}
