vector<int> superiorElements(vector<int>&a) {
    int n = a.size();
    vector<int> v;
    int max = a[n - 1];
    v.push_back(a[n-1]);

    for(int i=n-2; i>=0; i--){
        if(a[i] > max){
            v.push_back(a[i]);
            max = a[i];
        }
    }
    return v;
}