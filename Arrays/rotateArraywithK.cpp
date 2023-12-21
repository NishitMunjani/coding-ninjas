vector<int> rotateArray(vector<int>arr, int k) {
    vector<int> v;
    int n = arr.size();
    for(int i=0;i<k;i++){
        v.push_back(arr[i]);
    }
    for(int i=k ; i<n; i++){
        arr[i-k] = arr[i];
    }
    arr.erase(arr.end() - k, arr.end());
    arr.insert(arr.end(), v.end() - k, v.end());
    return arr;
}