#include <iostream>
using namespace std;

int main(){
  long long N;
  long long sum = 0;
  cin >> N;
  long long cnt = N / 10;
  sum = cnt;
  if (N % 2)
    cout << '0' << endl;
  else {
    while (cnt != 0) {
      sum += cnt / 5;
      cnt /= 5;
    }
    cout << sum << endl;
  }
}
