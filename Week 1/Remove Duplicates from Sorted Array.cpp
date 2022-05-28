/* Link : https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/ */


/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.*/


/*Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/


/* Solution */

/*
for the best case it can be a empty vector(array).So, we will just return 0 for that.

If the vector is not empty the array always have a distinct number so we will start from 1 and if the previous
num of array is not match with the present itaretion value we will put the value to the array[l] and we will incress
the value of l
*/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int l=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] != nums[i-1]){
                nums[l]=nums[i];
                ++l;
            }
        }
        return l;
    }
};

/*
Space complexity : O(1)
Time complexity : O(n)
*/
