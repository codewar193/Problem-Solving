#include <bits/stdc++.h>

vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)

{

    // Write your code here.

    vector<pair<int,int>> ans;

    unordered_map <int,int> ht;

    ht[arr[0]]=1;

 

    for(int i=1;i<n;i++){

        int rem = target - arr[i];

        if(ht[rem]){

            ans.push_back({rem, arr[i]});

            ht[rem]--;

            ht[arr[i]]--;

        }

        ht[arr[i]]++;

    }

 

    if(ans.size() == 0)

        return {{-1, -1}};

    return ans;

}
