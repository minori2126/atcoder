import sys
from atcoder.segtree import SegTree

def main():
    input = sys.stdin.read
    data = input().split()

    N = int(data[0])
    Q = int(data[1])
    A = [int(x) for x in data[2:2 + N]]

    op = lambda x,y : x^y
    e = 0
    seg = SegTree(op, e, A);

    query_start = 2 + N

    ans = []
    for i in range(Q):
        idx = i * 3 + query_start
        T = int(data[idx])
        X = int(data[idx + 1])
        Y = int(data[idx + 2])

        if T == 1:
            current = seg.get(X - 1)
            new = current ^ Y
            seg.set(X - 1, new)

        else :
            ans.append(str(seg.prod(X - 1, Y)))

    print("\n".join(ans))

if __name__ == "__main__":
    main()
