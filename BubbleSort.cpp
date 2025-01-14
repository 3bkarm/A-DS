void bubble_sort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j + 1 < n - i; ++j) {
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
        }
    }
}
