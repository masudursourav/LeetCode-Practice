// Link : https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/883/
/*
A phrase is a palindrome if,
after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters,
it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

*/

/*
Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
*/

/* Solution */

class Solution {
public:
    bool isPalindrome(string s) {
        string temp  = "";
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9'){
                temp += s[i];
            }
            else if(s[i]>='A' && s[i]<='Z'){
                temp += (char)(s[i] + 32);
            }
        }
        string rev = temp;
        reverse(rev.begin(),rev.end());
        if(rev==temp){
            return true;
        }
        return false;
    }
};

// Time Complexity : O(n)
// Space Complexity : O(n)
