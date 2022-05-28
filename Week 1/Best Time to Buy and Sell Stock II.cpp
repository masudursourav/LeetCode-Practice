/* Link : https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/ */

/*Given an array, rotate the array to the right by k steps, where k is non-negative.*/

/*
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
*/

/* Solution */
/*
suppose array = [4,5,6,7,8],k=2;
1. reverse the whole array = [8,7,6,5,4];
2. reverse first k element = [7,8,6,5,4];
3. reverse the all element after k elements = [7,8,4,5,6];
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k > nums.size()) k%=nums.size();
          reverse(nums.begin(),nums.end());
          reverse(nums.begin(),nums.begin()+k);
          reverse(nums.begin()+k,nums.end());
    }
};

/*
Space complexity : O(1)
Time complexity : O(n)
*/
