// 2657. Find the Prefix Common Array of Two Arrays
//https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int> ans(n,0);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[A[i]]=max(i,mp[A[i]]);
            mp[B[i]]=max(i,mp[B[i]]);
        }
        for(auto it : mp){
            ans[it.second]++;
        }
        for(int i=1;i<n;i++){
            ans[i]=ans[i-1]+ans[i];
        }
        return ans;
    }
};