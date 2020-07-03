#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
  int N;
  int A[16];
  int x[16][15];
  int y[16][15];
  int ans = 0;
  int i, j, k;
  int judge[16];
  cin >> N;
  for (i = 0; i < N; i++) {
    cin >> A[i];
    for (j = 0; j < A[i]; j++) {
      cin >> x[i][j] >> y[i][j];
    }
  }
  for (j = 0; j < (int)pow(2, N); j++) {
    int flag = 1;
    int cnt = 0;
    for (i = 0; i < N; i++) {
      if (j & (1<<i)) {
        // cout << endl;
        // cout << j << ' ' << i << endl;
        for (k = 0; k < A[i]; k++) {
          // if (j == 3)
          // cout << y[i][k] << ' ' << (j&1<<(x[i][k]-1))<< endl;
          if (y[i][k] == 1 && (j & 1<<(x[i][k]-1)) == 0)
            flag = 0;
          if (y[i][k] == 0 && (j & 1<<(x[i][k]-1)) != 0)
            flag = 0;
          if (flag == 0) {
            // cout << j << ' ' << k << endl;
            break;
          }
        }
      }
      if (flag == 0)
        break;
    }
    if (flag == 1) {
      // cout << j << endl;
      for (i = 0; i < N; i++)
        if(j & (1<<i))
          cnt++;
    }
    if (cnt > ans)
      ans = cnt;
  }
  cout << ans << endl;
  return 0;
}
