// 1930. Unique Length-3 Palindromic Subsequences
// https://leetcode.com/problems/unique-length-3-palindromic-subsequences/description/?envType=daily-question&envId=2025-01-04

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
        int countPalindromicSubsequence(string s) {
        int first[26] = {[0 ... 25] = INT_MAX}, last[26] = {}, res = 0;
        for (int i = 0; i < s.size(); ++i) {
            first[s[i] - 'a'] = min(first[s[i] - 'a'], i);
            last[s[i] - 'a'] = i;
        }
        for (int i = 0; i < 26; ++i)
            if (first[i] < last[i])
                res += unordered_set<char>(begin(s) + first[i] + 1, begin(s) + last[i]).size();
        return res;
    }
};