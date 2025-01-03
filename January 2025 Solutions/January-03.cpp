// 2270. Number of Ways to Split Array
// https://leetcode.com/problems/number-of-ways-to-split-array/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        long long int sum=0;
        long long int currSum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        for(int i=0;i<n-1;i++){
            currSum+=nums[i];
            if(currSum>=sum-currSum){
                count++;
            }
        }
        return count;
    }
};