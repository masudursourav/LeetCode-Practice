/* Link : https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/880/ */

/*
Given a signed 32-bit integer x, return x with its digits reversed.
 If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
*/

/*
Example 1:

Input: x = 123
Output: 321
*/
/* Solution */
class Solution {
public:
    int reverse(int x) {
        long ans = 0;
        while(x){
            ans = ans * 10 + x % 10;
            x/=10;
            }
        return (ans > INT_MAX || ans < INT_MIN) ? 0 : ans;
    }
};

// Time Complexity : O(logN)
// Space Complexity : O(1)
