#include <iostream>
using namespace std;

int main() {
  int N, K;
  int R, S, P;
  string T;
  int i, j;
  int count = 0;
  cin >> N >> K;
  cin >> R >> S >> P;
  cin >> T;
  for (i = 0; i < K; i++) {
    for (j = i; j < T.size(); j+= K) {
      if (T[j] == 'r')
        count += P;
      else if (T[j] == 's')
        count += R;
      else
        count += S;
      if (j < T.size() - K)
        if (T[j] == T[j+K])
          j += K;
    }
  }
  cout << count << endl;
}
