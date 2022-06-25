/* Link : https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/559/ */

/*
You are given a large integer represented as an integer array digits,
where each digits[i] is the ith digit of the integer.
The digits are ordered from most significant to least significant in left-to-right order.
The large integer does not contain any leading 0's.
Increment the large integer by one and return the resulting array of digits.
*/

/*
Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
*/

/*
Example 2:
Input: digits = [9,9]
Output: [1,0,0]
*/

/* Solution */
/*
First we assume carry is equal 1
we will start iteration from the last value of the array we will add the carry with the last value
because we have to increse the last value by one , our new carry would be value / 10, and our updated
value will be value % 10 . if the carry still remain after the iteration we will add the carry to the First
position of the vector.
*/


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for(int i=digits.size()-1;i>=0;i--){
            digits[i] += carry;
            carry = digits[i]/10;
            digits[i] %= 10;
        }
        if(carry) digits.insert(digits.begin(),carry);

        return digits;

    }
};

// Time Complexity : O(n)
// Space Complexity : O(1)
