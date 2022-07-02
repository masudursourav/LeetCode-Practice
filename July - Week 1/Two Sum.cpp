/* Link : https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/546/ */

/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

/*
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/

/* Solution */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v(2,0);
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            int sum = target - nums[i];
            if(m[sum]){
                v[0] = (m[sum]-1);
                v[1] = i;
                return v;

            }
            else{
                m[nums[i]] = i+1;
            }
        }
        return v;
    }
};

// Time Complexity : O(n)
// Space Complexity : O(n)
