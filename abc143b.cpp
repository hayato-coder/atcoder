#include <iostream>
using namespace std;

int main() {
  int N;
  int d[100];
  int i, j;
  int sum = 0;
  cin >> N;
  for (i = 0; i < N; i++)
    cin >> d[i];
  for (i = 0; i < N; i++) {
    for (j = i+1; j < N; j++) {
      sum += d[i]*d[j];
    }
  }
  cout << sum << endl;
}
