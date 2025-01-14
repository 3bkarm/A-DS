void merge(int lx, int rx, int ly, int ry, vector<int>& v) {
    vector<int> t;
    int ix = lx, iy = ly;
    while (ix <= rx and iy <= ry) {
        if ( v[ix] <= v[iy] ) 
            t.push_back(v[ix++]);
        else 
            t.push_back(v[iy++]);
    }
    while (ix <= rx)
        t.push_back(v[ix++]);
    while (iy <= ry)
        t.push_back(v[iy++]);
    for (int i = lx, j = 0; i <= ry; ++i, ++j)
        v[i] = t[j];
}

void divide(int l, int r, vector<int>& v) {
    if (l == r) return;
    int mid = l + (r - l) / 2;
    divide(l, mid, v);
    divide(mid + 1, r, v);
    return merge(l, mid, mid + 1, r, v);
}
