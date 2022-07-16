/* Link : https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/881/ */
/*
Given a string s, find the first non-repeating character in it and return its index.
If it does not exist, return -1.
*/

/*
Example 1:

Input: s = "leetcode"
Output: 0
*/

/* Solution */
class Solution {
public:
    int firstUniqChar(string s) {
        vector<vector<int>>a(26);
        for(int i=0;i<s.size();i++){
            a[s[i]-'a'].push_back(i);
        }
        int mn = INT_MAX;
        for(int i=0;i<26;i++){
            if(a[i].size() == 1){
                mn = min(mn,a[i][0]);
            }
        }
        return mn == INT_MAX ? -1 : mn;
    }
};

// Time Complexity : O(N)
// Space Complexity : O(N)
