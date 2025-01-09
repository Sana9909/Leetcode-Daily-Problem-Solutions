// 2185. Counting Words With a Given Prefix
// https://leetcode.com/problems/counting-words-with-a-given-prefix/?envType=daily-question&envId=2025-01-09

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        int pSize = pref.size();
        for(string word : words){
            if(word.size() >= pSize){
                if(word.substr(0, pSize) == pref){
                    count++;
                }
            }
        }
        return count;
    }
};