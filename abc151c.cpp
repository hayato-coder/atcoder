#include <iostream>
using namespace std;

int main() {
  int N, M;
  int p[100005];
  int i, j;
  string S[100005];
  bool flag[100005];
  int sum = 0;
  int cnt = 0;
  cin >> N >> M;
  for (i = 1; i <= N; i++)
    flag[i] = false;
  for (i = 0; i < M; i++) {
    cin >> p[i];
    cin >> S[i];
    if (S[i][0] == 'A' && S[i][1] == 'C')
      flag[p[i]] = true;
  }
  for (i = 1; i <= N; i++)
    if (flag[i])
      cnt++;
  for (i = 0; i < M; i++) {
    if (S[i][0] == 'W' && S[i][1] == 'A' && flag[p[i]] == 1)
      sum++;
    else if (S[i][0] == 'A' && S[i][1] == 'C')
      flag[p[i]] = false;
  }
  cout << cnt << ' ' << sum << endl;
}
