ll mod_pow(ll x, ll n) {
  if (n == 0) return 1;
  ll res = mod_pow(x * x % MOD, n / 2);
  if (n & 1) res = res * x % MOD;
  return res;
}

ll combination(ll n, ll k) {
  ll sum1 = 1;
  ll sum2 = 1;
  for (int i = 1; i <= k; i++) {
    sum1 = sum1 * (n-k+i) % MOD;
    sum2 = sum2 * i % MOD;
  }
  sum2 = mod_pow(sum2, MOD-2);
  return sum1 * sum2 % MOD;
}
