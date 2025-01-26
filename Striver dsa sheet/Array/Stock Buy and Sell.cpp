#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
    //Brute
    int n = prices.size();
    int maxi = 0;
    for(int i=0;i<n;i++){
          int profit = 0;
          for(int j=i;j<n;j++){
            profit = prices[j] - prices[i];
            maxi = max(maxi,profit);
          }
    }
    return maxi;
}

int maxProfit(vector<int>& prices){
    int n = prices.size();
    int left=0, right = n-1;
    int profit = 0;
    int maxi = 0;
    while(left<right){
        if((prices[right]-prices[left])<0){
            left++;
        }
        else{
            profit = prices[right]-prices[left];
            maxi = max(profit,maxi);
            right--;
        }
    }
    return maxi;
}