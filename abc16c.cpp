#include <iostream>
#include <queue>
using namespace std;
#define INF 1000000000

int main() {
  int N, M;
  int A[100];
  int B[100];
  int i ,j;

  cin >> N >> M;
  for (i = 0; i < M; i++) {
    cin >> A[i] >> B[i];
  }
  for (i = 0; i < N; i++) {
    int d[N];
    for (j = 0; j < N; j++) {
      d[j] = INF;
    }
    queue <int> que;
    que.push(i);
    d[i] = 0;
    while (que.size()) {
      int p = que.front();
      que.pop();　
      for (j = 0; j < M; j++) {
        if (A[j]-1 == p && d[B[j]-1] == INF) {
          que.push(B[j]-1);
          d[B[j]-1] = d[A[j]-1] + 1;
        }
        if (B[j]-1 == p && d[A[j]-1] == INF) {
          que.push(A[j]-1);
          d[A[j]-1] = d[B[j]-1] + 1;
        }
      }
    }
    int count = 0;
    for (j = 0; j < N; j++) {
      if (d[j] == 2)
        count += 1;
    }
    cout << count << endl;
  }
}
