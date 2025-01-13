// 3223. Minimum Length of String After Operations
// https://leetcode.com/problems/minimum-length-of-string-after-operations/description/?envType=daily-question&envId=2025-01-13

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        map<char, int> mp;
        for (auto c : s) {
            mp[c]++;
        }
        int ans = 0;
        for (auto it : mp) {
            if (it.second % 2 == 0) {
                ans += 2;
            } else {
                ans++;
            }
        }
        return ans;
    }
};