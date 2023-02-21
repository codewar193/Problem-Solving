// class Solution {
// public://using recusion - TC = O(n) SC = O(n)
//     int helper(int n,int k){
//         if(n==1)
//             return 0;
//         return (helper(n-1,k) + k) % n;
//     }
//     int findTheWinner(int n, int k) {
//         return helper(n,k)+1;   //+1 is for converting 0-based indexing to 1-based indexing
//     }
// };


class Solution {
public://Using DP TC = O(n) SC = O(1)
    int helper(int n,int k){
        int ans =0;
       
            for(int i=1;i<=n;i++)
            {
                ans = (ans+k)%i;
            }
             return ans;
       
    }
    int findTheWinner(int n, int k) {
        return helper(n,k)+1;   //+1 is for converting 0-based indexing to 1-based indexing
    }
};
