#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  if (N % 2)
    cout << (double)(N+1)/(2*N) << endl;
  else
    cout << "0.5" << endl;
}
