/*
Given an integer array nums, return the greatest common divisor of the smallest number and largest number in nums.

The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.
Example 1:

Input: nums = [2,5,6,9,10]
Output: 2
Explanation:
The smallest number in nums is 2.
The largest number in nums is 10.
The greatest common divisor of 2 and 10 is 2.
*/


class Solution {
public:

int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}

    int findGCD(vector<int>& nums) {
        int n_size = nums.size();

        sort(nums.begin(),nums.end());
       int ans = gcd(nums[0],nums[n_size-1]);
       return ans;
    }
};
