/* Link : https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/578/ */

/*
Given an integer array nums,
 return true if any value appears at least twice in the array,
 and return false if every element is distinct.
*/

/*
Example 1:

Input: nums = [1,2,3,1]
Output: true
*/

/*
Example 2:

Input: nums = [1,2,3,4]
Output: false
*/

/* Solution */


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            ++m[nums[i]];
            if(m[nums[i]]>1){
                return true;
            }
        }
        return false;
    }
};


// Time Complexity : O(n) (For some case it can be O(nlog(n)))
// Space Complexity : O(n)
