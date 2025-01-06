// 1769. Minimum Number of Operations to Move All Balls to Each Box
// https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/description/?envType=daily-question&envId=2025-01-06

#include <bits/stdc++.h>
using namespace std;

//Time Complexity: O(n) 
//Space Complexity: O(1) 
//Solution

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.length();
        vector<int> ans(n,0);
        int ops=0,count=0;
        for(int i=0;i<n;i++){
            ans[i]+=ops;
            if(boxes[i]=='1'){
                count++;
            }
            ops+=count;
        }
        ops=0,count=0;
        for(int i=n-1;i>=0;i--){
            ans[i]+=ops;
            if(boxes[i]=='1'){
                count++;;
            }
            ops+=count;
        }
        return ans;
    }
};

//Time Complexity: O(n^2) 
//Space Complexity: O(1) 
//Solution

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.length();
        vector<int> ans;
        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=0;j<n;j++){
                if(boxes[j]=='1'){
                    temp+=abs(i-j);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};