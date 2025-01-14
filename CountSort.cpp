void count_sort(vector<int>& v) {
    int n = v.size();
    int MIN = 0, MAX = INT32_MIN;
    for (int i = 0; i < n; ++i) {
        MAX = max(MAX, v[i]);
        MIN = min(MIN, v[i]);
    }
    int length = MAX - MIN + 1;
    vector<int> freq(n);
    for (int i = 0; i < n; ++i)
        ++freq[v[i] + abs(MIN)];
    vector<int> sorted(n);
    for (int i = 0; i < n; ++i) 
        sorted[freq[v[i] + abs(MIN)] - 1] = v[i];
}
