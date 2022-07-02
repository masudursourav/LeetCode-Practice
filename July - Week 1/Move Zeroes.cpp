/* Link : https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/567/ */


/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

*/

/*
Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

*/

/* Solution */

/* First check the value is 0 or not if not set the value to the array strat from front
after that add all the zero to the last of the array.
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j] = nums[i];
                ++j;
            }
        }
        for(int i=j;i<nums.size();i++) nums[i] = 0;
    }
};



// Time Complexity : O(n)
// Space Complexity : O(1) 
