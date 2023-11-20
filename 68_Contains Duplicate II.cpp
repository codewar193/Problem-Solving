class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        unordered_map<int,int> mp;
        int i =0;
        while(i<nums.size()){
            int n = nums[i];
            if(mp.find(n)!=mp.end() && abs(i-mp[n])<=k)
               return true;
            mp[n]=i;

            i++;

        }
        return false;
    }
};
