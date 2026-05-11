#include <bits/stdc++.h>
using namespace std;

struct SegTree {
    int n;
    vector<int> tree;
    
    SegTree(int n, vector<int>& a) : n(n), tree(2 * n) {
        for (int i = 0; i < n; i++) tree[i + n] = a[i];
        for (int i = n - 1; i >= 1; i--) tree[i] = max(tree[2*i], tree[2*i+1]);
    }

    void update(int pos, int val) {
        pos += n;
        tree[pos] = val;
        for (pos >>= 1; pos >= 1; pos >>= 1)
            tree[pos] = max(tree[2*pos], tree[2*pos+1]);
    }

    // Find leftmost index in [0, n) with value >= x
    int query(int x) {
        return query(1, 0, n, x);
    }

    int query(int node, int lo, int hi, int x) {
        if (tree[node] < x) return -1;        // No valid seat in range
        if (hi - lo == 1) return lo;          // Leaf node
        int mid = (lo + hi) / 2;
        int left = query(2*node, lo, mid, x);
        if (left != -1) return left;          // Prefer leftmost
        return query(2*node+1, mid, hi, x);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    SegTree seg(n, a);

    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        int idx = seg.query(x);
        if (idx == -1) {
            cout << -1 << "\n";
        } else {
            cout << idx + 1 << "\n";
            seg.update(idx, a[idx] - 1);
            a[idx]--;
        }
    }
    return 0;
}