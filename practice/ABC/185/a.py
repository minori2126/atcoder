import sys
from atcoder.segtree import SegTree

input = sys.stdin.read
data = input().split()
N = int(data[0])
Q = int(data[1])
a = [int(x) for x in data[2:N + 2]]

op = lambda x,y: x if x < y else y
e = 10000000000000
seg = SegTree(op, e, a)

query_start = N + 2

ans = []
for i in range(Q):
    ans.append(str(seg.prod(int(data[i*2+query_start]) , int(data[i*2+query_start + 1]))))

print("\n".join(ans))
