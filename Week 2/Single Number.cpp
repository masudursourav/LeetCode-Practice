/* Link : https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/549/ */

/*
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

*/

/*
Example 1:

Input: nums = [2,2,1]
Output: 1
*/
/* Solution */
/* For Example 1 if we xor 2 with 2 our result will be 0 and if we again xor 0 with 1 out result will be 1
so, here is out single number is 1 */

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = nums[0];
        for(int i=1;i<nums.size();i++){
                ans ^= nums[i];
        }
        return ans;

    }
};


// Time Complexity : O(n)
// Space Complexity : O(1)
