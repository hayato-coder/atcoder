vector<int> prime;
bool is_prime[MAX_N+1];

int sieve(int n) {
  int p = 0;
  for (int i = 0; i <= n; i++)
    is_prime[i] = true;
  is_prime[0] = is_prime[1] = false;
  for (int i = 0; i <= n; i++) {
    if (is_prime[i]) {
      prime.push_back(i);
      p++;
      for (int j = 2 * i; j <= n; j+=i) {
        is_prime[j] = false;
      }
    }
  }
  return p;
}
