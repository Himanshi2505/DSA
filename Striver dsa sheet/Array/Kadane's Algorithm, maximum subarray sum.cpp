#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums){
    //Better Approach
    int n = nums.size();
    int maxsum = INT_MIN;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum+=nums[j];
            maxsum = max(sum,maxsum);
        }
    }
    return maxsum;
}

//Kadane's Algorithm
int maxSubArray(vector<int>& nums){
    int n = nums.size();
    int maxi = INT_MIN;
    int sum = 0;

    for(int i=0;i<n;i++){
        sum+=nums[i];

        if(sum>maxi){
            maxi = sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}