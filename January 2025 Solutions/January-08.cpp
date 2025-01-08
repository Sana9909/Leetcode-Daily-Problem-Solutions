// 3042. Count Prefic and Suffix Pairs I
// https://leetcode.com/problems/count-prefix-and-suffix-pairs-i/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n=words.size();
        int ans=0;
        for(int i=0;i<n;i++){
            string word=words[i];
            for(int j=i+1;j<n;j++){
                if(word.size()>words[j].size()){
                    continue;
                }
                string prefix=words[j].substr(0,word.size());
                string suffix=words[j].substr(words[j].size()-word.size());
                if(prefix==suffix && prefix==word){
                    ans++;
                }
            }
        }
        return ans;
    }
};