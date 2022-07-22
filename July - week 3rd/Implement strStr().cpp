// Link : https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/885/

/*
Implement strStr().

Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Clarification:

What should we return when needle is an empty string? This is a great question to ask during an interview.

For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().
*/

/*
Example 1:

Input: haystack = "hello", needle = "ll"
Output: 2
*/

/* Solution */

class Solution {
public:
    int strStr(string haystack, string needle) {
        int l = needle.size();
        if(l == 0) return 0;
        for(int i=0;i<haystack.size();i++){
            if(haystack[i] == needle[0]){
                string temp = haystack.substr(i,l);
                if(temp == needle){
                    return i;
                }
            }
        }
        return -1;
    }
};

// Time Complexity : O(n^2)
// Space Complexity : O(1)
