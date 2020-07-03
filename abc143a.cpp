#include <iostream>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if (A > 2*B)
    cout << A - 2*B << endl;
  else
    cout << '0' << endl;
}
