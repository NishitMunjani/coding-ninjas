#include<map>
#include<vector>
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    int n = a.size();
    map<int,int> mpp;
    vector<int> ans;
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }

    for (auto it = mpp.begin(); it != mpp.end(); ++it) {
        if (it->second == 2) {
            ans.push_back(it->first);
        }
    }
    for(int i=1;i<=n;i++){
        if(mpp.find(i) == mpp.end()){
            ans.push_back(i);
        }
    }

    return ans;
}