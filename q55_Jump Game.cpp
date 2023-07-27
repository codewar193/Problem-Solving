class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        int reachable = 0;
         if(n==1)return true;
       if(nums[0]==0 ) return false;
      

        for(int i =0;i<n;i++)
        {
               if (i>reachable ) {
               
                return false;
            }
            
           int temp = nums[i]+i;

           reachable = max(temp, reachable);
           if(reachable>= n-1 )return true;

           
        }

        return false;
    }
};
