class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        

        sort(nums.begin(),nums.end());
        int i= 0;
        int j= nums.size()-1;
        set<double> temp_set;


        while(i<j)
        {
            double avg = (nums[i]+nums[j])/2.0;
            temp_set.insert(avg);
            i++;
            j--;
            if(i>j)break;
        }

        return temp_set.size();
    }
};
