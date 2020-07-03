ll calcproduct(int n) {
  ll ans = 1;
  for (int i = 1; i <= n; i++) {
    ans *= i;
    ans %= MOD;
  }
  return ans;
}

ll mod_pow(ll x, ll n) {
  if (n == 0) return 1;
  ll res = mod_pow(x * x % MOD, n / 2);
  if (n & 1) res = res * x % MOD;
  return res;
}

ll combination(int n, int k) {
  ll a = calcproduct(n);
  ll b = calcproduct(k);
  ll c = calcproduct(n-k);
  b = mod_pow(b, MOD-2);
  c = mod_pow(c, MOD-2);
  ll ans = ((a*b)%MOD*c)%MOD;
  return ans;
}
