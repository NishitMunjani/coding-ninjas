#include<set>
vector <int> sortedArray(vector <int> a, vector <int> b) {
    set<int> s;
    for(auto it: a){
        s.insert(it);
    }
    for(auto it: b){
        s.insert(it);
    }
    a.erase(a.begin(),a.end());
    for(auto it: s){
        a.push_back(it);
    }
    return a;
}