#include <iostream>
#include <cmath>
#include <cstdio>
using  namespace std;

int main(){
  int N;
  int x[10];
  int y[10];
  int i, j;
  double sum = 0;
  int product = 1;
  cin >> N;
  for (i = 0; i < N; i++) {
    cin >> x[i] >> y[i];
  }
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      if (j != i)
        sum += sqrt((double)((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j])));
    }
  }
  printf("%lf\n", sum/N);
}
