/* Link : https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/674/ */


/* Given two integer arrays nums1 and nums2, return an array of their intersection.
Each element in the result must appear as many times as it shows in both arrays and
 you may return the result in any order.
*/

/*
Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
*/

/* Solution */

/* Count each number appers how many time at array1 and array2 and answer the minimum of that number in both
array */

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>cnt1(1001,0),cnt2(1001,0),ans;
        for(int i=0;i<nums1.size() ||i<nums2.size();i++){
            if(i<nums1.size()) ++cnt1[nums1[i]];
            if(i<nums2.size())  ++cnt2[nums2[i]];
        }
        for(int i=0;i<1001;i++){
            for(int j=0;j<min(cnt1[i],cnt2[i]);j++) ans.push_back(i);
        }
        return ans;
    }
};

// Time Complexity : O(n)
// Space Complexity : O(n)
