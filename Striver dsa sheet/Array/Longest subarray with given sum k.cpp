#include<bits/stdc++.h>
using namespace std;

int lenOfLongestSubarr(vector<int> &arr, int k){
//     int n = arr.size();
//     int len = 0;
//     int maxi = 0;
   
//     for(int i=0;i<n;i++){
//     long long sum = 0;
//     for(int j=i;j<n;j++){
//           sum+=arr[j];
//           if(sum==k){
//             len = j-i+1;
//           }
//           maxi = max(maxi,len);
//     }
//     }
//     return maxi;
// }

// This solution is giving TLE because Constraints:
// 1 ≤ arr.size() ≤ 106  so N^2 solution wont work, so let's optimize our code

// int n = arr.size();
// int left =0, right =0;
// int sum = arr[0];
// int maxlen = 0;

// while(right<n){
//   while(left<right && sum>k){
//     sum-=arr[left];
//     left++;
//   }

//   if(sum==k){
//     maxlen = max(maxlen,right-left+1);
//   }

//   if(right<n){
//     sum+=arr[right];
//   }
//     right++;
// }
// return maxlen;

// }

//using Hashing

int n = arr.size();

map<int,int> preSumMap;
int sum = 0;
int maxlen = 0;
for(int i=0;i<n;i++){
  sum+=arr[i];

  if(sum==k){
    maxlen = max(maxlen,i+1);
  }

  int rem = sum - k;

  if(preSumMap.find(rem)!= preSumMap.end()){
    int len = i - preSumMap[rem];
    maxlen = max(maxlen,len);
  }

  if(preSumMap.find(sum)==preSumMap.end()){
          preSumMap[sum] = i;
  }
}
 return maxlen;
}

