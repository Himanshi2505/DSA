#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums){
    map<int,int> mp;
    int n = nums.size();
    for(auto it: nums){
        mp[it]++;
    }

    for(auto it:mp){
        if(it.second>n/2){
            return it.first;
        }
    }
    return -1;
}