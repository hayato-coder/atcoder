N = int(input())
Q = list(map(int, input().split()))
A = list(map(int, input().split()))
B = list(map(int, input().split()))


max_A_cnt = 1e7
for a, q in zip(A, Q):
    if a == 0:
        continue
    max_A_cnt = min(max_A_cnt, q // a)

ans = 0
for A_cnt in range(0, max_A_cnt + 1):
    cnt = 1e7
    for a, b, q in zip(A, B, Q):
        res = q - a * A_cnt
        if b == 0:
            continue
        cnt = min(cnt, res // b + A_cnt)
    ans = max(ans, cnt)

print(ans)
