#include <bits/stdc++.h>

//TC: O(nlogn)+O(N*M)
bool  CAMP(vector<int> &a,vector<int> &b){
    return a[2]>b[2];
}
vector<int> jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
   vector<int> ans;
   
    sort(jobs.begin(),jobs.end(),CAMP);
    int max_deadline = 0;
    for(auto x:jobs){
        max_deadline = max(max_deadline,x[1]);
    }

    vector<bool>visit(max_deadline,false);
    int nJobs=0;
    int nProfit=0;

    for(auto x:jobs){
        int dead = x[1];
        int pro = x[2];

        for(int i = dead-1;i>=0;i--){

            if(visit[i]==false){
                nJobs++;
                nProfit+=pro;
                visit[i]=true;
                break;
            }
        }
    }


    return {nJobs,nProfit};
}
