#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>&nums){
    int n = nums.size();
    // sort(nums.begin(),nums.end());
    // int missing = -1 ;
    // for(int i=0;i<n;i++){
    //       if(nums[i]!=i){
    //         missing = i;
    //         break;
    //       }
    // }
    // if(missing = -1){
    //     missing = n;
    // }

    // return missing;
    int xor1 = 0;
    for(int i=0;i<=n;i++){
        xor1 = xor1^i;
    }
    int xor2 = 0;
    for(int i=0;i<n;i++){
        xor2 = xor2^nums[i];
    }
    return xor1 ^ xor2 ;          

}