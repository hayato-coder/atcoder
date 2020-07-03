#include <iostream>
using namespace std;

int main(){
  int N;
  int i, j;
  int flag = 0;
  cin >> N;
  for (i = 1; i <= 9; i++) {
    for (j = i; j <= 9; j++) {
      if (N == i*j)
        flag = 1;
    }
  }
  if (flag)
    puts("Yes");
  else
    puts("No");
}
