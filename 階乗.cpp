ll calcproduct(int n) {
  if (n == 0)
    return 1;
  ll ans = 1;
  for (int i = 1; i <= n; i++) {
    ans *= i;
    ans %= MOD;
  }
  return ans;
}
