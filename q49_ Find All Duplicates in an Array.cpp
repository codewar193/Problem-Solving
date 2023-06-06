class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
         int size = arr.size();
    unordered_map <int,int> nums;
    vector<int> ans;

    for(int i =0;i<size;i++)
    {
        if(nums[arr[i]] == 0)
        {
            nums[arr[i]]++;
        }
        else{
            ans.push_back(arr[i]);
        }
    }

    return ans;
    }
};
