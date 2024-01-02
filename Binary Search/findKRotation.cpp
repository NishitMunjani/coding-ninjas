#include<bits/stdc++.h>
int findKRotation(vector<int> &arr){
    int n = arr.size();
    int minEle = INT_MAX;
    int low = 0, high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low] <= arr[mid]){
            minEle = min(minEle, arr[low]);
            low = mid + 1;
        }
        else{
            minEle = min(minEle, arr[mid]);
            high = mid - 1;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i] == minEle) return i;
    }
}