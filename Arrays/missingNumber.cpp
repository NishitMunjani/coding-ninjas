int missingNumber(vector<int>&a, int N) {
    int sum = (N * (N + 1)) / 2;
    int s2 = 0;
    for (int i=0; i<N-1; i++) {
        s2 += a[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}