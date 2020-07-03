#include <iostream>
using namespace std;

int A1, A2, A3;

int main(){
  cin >> A1 >> A2 >> A3;
  int sum = A1 + A2 + A3;
  if (sum >= 22)
    cout << "bust" << endl;
  else
    cout << "win" << endl;
}
