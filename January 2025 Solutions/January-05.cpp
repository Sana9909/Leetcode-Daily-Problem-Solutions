// 2381. Shifting Letters II
// https://leetcode.com/problems/shifting-letters-ii/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.size();
        vector<int> line(n+1,0);
        for(auto it:shifts){
            if(it[2]==1){
                line[it[0]]++;
                line[it[1]+1]--;
            }
            else{
                line[it[0]]--;
                line[it[1]+1]++;                
            }
        }
        for(int i=1;i<=n;i++){
            line[i]+=line[i-1];
        }
        for(int i=0;i<n;i++){
			int increaseBy=(s[i]-'a'+line[i])%26; 
			increaseBy=(increaseBy+26)%26;
			s[i]='a'+increaseBy;
        }
        return s;
    }
};