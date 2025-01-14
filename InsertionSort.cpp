void insertion_sort(vector<int>& v) {
    int n = v.size();
    for (int i = 1; i < n; ++i) {
        int at = i;
        while (at >= 1 and v[at] < v[at - 1])
            swap(v[at - 1], v[at]), --at;
    }
}
