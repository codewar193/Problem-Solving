/*
Given an integer n, return the number of prime numbers that are strictly less than n.
Example 1:

Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
*/




class Solution {
public:
    int countPrimes(int n) {
     vector<int> isPrime(n+1,1);
   
    int count=0;
     for(int i=2;i*i<n;i++)
     {
        if(isPrime[i])
        {
             for(int j=2*i;j<n;j=j+i)
         {
            isPrime[j]=0;
         }
        }

     }

     for(int i=2;i<n;i++){
         if(isPrime[i]==1)count++;
     }
     return count;
    }
};
