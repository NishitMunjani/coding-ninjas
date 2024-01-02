int lowerbound(vector<int>& nums,int n, int target){
	int ans = n;
	int left = 0, right = n-1, mid; 

	while(left<=right){
		mid = (left+right)/2;
		if(nums[mid] >= target){
			ans = mid;
			right = mid - 1;
		}
		else{
			left = mid + 1;
		}
	}
	return ans;
}
int upperbound(vector<int>& nums,int n, int target){
	int ans = n;
	int left = 0, right = n-1, mid; 

	while(left<=right){
		mid = (left+right)/2;
		if(nums[mid] > target){
			ans = mid;
			right = mid - 1;
		}
		else{
			left = mid + 1;
		}
	}
	return ans;
}
int count(vector<int>& arr, int n, int x) {
	int ub = upperbound(arr, n, x);
	int lb = lowerbound(arr, n, x);

	// if (arr[ub] != x) return 0;
	return ub-lb;

}
