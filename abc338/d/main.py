class BIT:
    # 長さN+1の配列を初期化
    def __init__(self, N):
        self.size = N
        self.bit = [0]*(N+1)

    # i番目までの和を求める
    def sum(self, i):
        res = 0
        while i > 0:
            res += self.bit[i] # フェニック木のi番目の値を加算
            i -= -i & i # 最も右にある1の桁を0にする
        return res

    # i番目の値にxを足して更新する
    def add(self, i, x):
        while i <= self.size:
            self.bit[i] += x # フェニック木のi番目にxを足して更新
            i += -i & i # 最も右にある1の桁に1を足す

N, M = map(int, input().split())
X = list(map(int, input().split()))

bit0=BIT(N)
bit1=BIT(N)

bas_dist = 0
for i in range(M - 1):
    l = min(X[i], X[i+1])
    r = max(X[i], X[i+1])
    root = r - l
    res = N - 2 * root
    bit0.add(l, -res*(l-1))
    bit0.add(r, res*(r-1))
    bit1.add(l, res)
    bit1.add(r, -res)
    bas_dist += r-l

penalty = 1e11
for i in range(N):
    penalty = min(penalty, bit0.sum(i+1)-bit0.sum(i)+(i+1)*bit1.sum(i+1)-i*bit1.sum(i))

print(bas_dist+penalty)

