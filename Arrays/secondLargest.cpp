vector<int> getSecondOrderElements(int n, vector<int> a) {
    vector<int> res; 
    sort(a.begin(), a.end());
    int SecMax = a[n-2];
    int SecMin = a[1]; 
    res.push_back(SecMax);
    res.push_back(SecMin);
    return res;
}
