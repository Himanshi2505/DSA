#include<bits/stdc++.h>
using namespace std;

vector<int> FindUnion(vector<int> arr1,vector<int> arr2){
    int n = arr1.size();
    int m = arr2.size();
    set <int> set;
    vector<int> Union;

    for(int i=0;i<n;i++){
        set.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        set.insert(arr2[i]);
    }
    for(auto &it:set){
        Union.push_back(it);
    }
    return Union;
}