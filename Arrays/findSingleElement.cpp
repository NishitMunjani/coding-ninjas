#include<vector>
#include<map>

int getSingleElement(vector<int> &arr){
	int n=arr.size();
	map<int, int> mpp;

	for(int i=0;i<n;i++){
		mpp[arr[i]]++;
	}
	for(auto it: mpp){
		if(it.second == 1) return it.first;
	}
}