#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums){
    
    int cnt0 = 0;
    int cnt1= 0;
    int cnt2 = 0;

    for(auto it: nums){
        if(it==0){
            cnt0 ++;
        }
        else if(it==1){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }

    for(int i=0;i<cnt0;i++){
        nums[i]=0;
    }
    for(int i=cnt0;i<cnt0 + cnt1;i++){
        nums[i] = 1;
    }
    for(int i=cnt0 + cnt1;i<n;i++){
        nums[i] = 2;
    }

}
