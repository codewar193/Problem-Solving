/*136. Single Number
Companies
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
You must implement a solution with a linear runtime complexity and use only constant extra space.
Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
*/

/*

class Solution {
public:

// XOR of zero and some bit returns that bit
// a^0 = a
// XOR of two same bits returns 0
// a^a = 0
// XOR of a^b^a for some bits a and b returns b
// a^b^a = (a^a)^b = 0^b = b

    int singleNumber(vector<int>& nums) {
        int temp=0;

        for(int x:nums)
        {
            temp^=x;
        }
           
          return temp;
    }
};



*/