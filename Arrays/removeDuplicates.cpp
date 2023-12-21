int removeDuplicates(vector<int> &arr, int n) {
	int writeIndex = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] != arr[i]) {
            arr[writeIndex++] = arr[i];
        }
    }
    arr.resize(writeIndex);

    return arr.size();
}