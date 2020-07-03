#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int N, K;
  int h;
  int cnt = 0;
  cin >> N >> K;
  for (int i = 0; i < N; i++) {
    cin >> h;
    if (h >= K)
      cnt++;
  }
  cout << cnt << endl;
}
