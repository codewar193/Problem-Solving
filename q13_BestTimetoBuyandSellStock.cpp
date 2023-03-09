/*
Best Time to Buy and Sell Stock
====================================
You are given an array prices where prices[i] is the price of a given stock on the ith day.You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
Example 1:
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
*/
/*

// Time Complexity: O(N). Where N is the size of prices array. 
// Auxiliary Space: O(1). We do not use any extra space. 
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0],max=0;
        for(int i=1;i<prices.size();i++)
        {
           if(buy>prices[i])buy=prices[i];
           else if(prices[i]-buy>max)
         {
             max=prices[i]-buy;
         }

        }
        return max;
    }
};


*/
