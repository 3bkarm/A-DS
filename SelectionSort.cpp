void selection_sort(vector<int>& v) {
    int n = v.size();
    for (int i = 0, t; i < n; ++i) {
        t = i;
        for (int j = i + 1; j < n; ++j)
            if (v[j] < v[t]) j = t;
        swap(v[i], v[t]);
    }
}
