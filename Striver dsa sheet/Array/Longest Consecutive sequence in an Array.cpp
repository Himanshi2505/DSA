#include<bits/stdc++.h>
using namespace std;

int longestSuccessiveElement(vector<int> &arr){
    int n = arr.size();
    int longest = 1;
    unordered_set<int> st;

    for(int i=0; i<n; i++){
        st.insert(arr[i]);
    }

    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int cnt = 1;
            int x = it;

            while(st.find(x+1)!=st.end()){
                x=x+1;
                cnt+=1;
            }
            longest=max(longest,cnt);
        }
    }
    return longest;
}