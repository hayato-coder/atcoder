#include <iostream>
using namespace std;

int main(){
  int A, B;
  cin >> A >> B;
  long long product = (long long)A*B;
  int temp = max(A, B);
  int tmp;
  B = min(A, B);
  A = temp;
  while (B != 0) {
    temp = A % B;
    A = B;
    B = temp;
  }
  cout << product / A << endl;
}
