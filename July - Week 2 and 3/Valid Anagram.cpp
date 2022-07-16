/* Link : https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/882/ */
/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
typically using all the original letters exactly once.
*/
/*
Example 1:

Input: s = "anagram", t = "nagaram"
Output: true
*/
/* Solution */
class Solution {
public:
    bool isAnagram(string s, string t) {
        int cnts[26] = {0}, cntt[26] = {0};
        for(int i=0;i < s.size() || i < t.size();i++){
            if(i<s.size()) ++cnts[s[i]-'a'];
            if(i<t.size()) ++cntt[t[i]-'a'];
        }
        for(int i=0;i<26;i++){
            if(cnts[i] != cntt[i]) return false;
        }
        return true;
    }
};
// Time Complexity : O(N)
// Space Complexity : O(1)
