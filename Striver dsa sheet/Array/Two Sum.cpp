#include<bits/stdc++.h>
using namespace std;

//Brute(O(N^2))

// vector<int> twoSum(vector<int> &nums, int target){
      
//       vector<int> ans;

//       for(int i=0;i<nums.size();i++){
//         for(int j=i+1;j<nums.size();j++){

//             if(nums[i] + nums[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//             }
//         }
//       }
//       return ans;
// }


vector<int> twoSum(vector<int> &nums, int target){

    vector<int> ans;
    map<int,int> mp;

    for(int i=0;i<nums.size();i++){
        mp[nums[i]] = i;
    }
    

    for(int i=0;i<nums.size();i++){
        
        int rem = target - nums[i];

        if( (mp.find(rem)!=mp.end())  && (mp[rem]!=i) ){
            ans.push_back(i);
            ans.push_back(mp[rem]);
            break;
            
        }
    }
    return ans;
}