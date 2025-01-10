#include<bits/stdc++.h>
using namespace std;

int MaxConsecutiveOnes(vector<int> &nums){
    int n = nums.size();
    int maxones = 0;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            cnt++;
        }
        else{
            cnt = 0;
        }
        maxones = max(cnt,maxones);
    }
    return maxones;
}