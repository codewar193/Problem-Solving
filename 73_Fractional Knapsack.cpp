#include <bits/stdc++.h> 

//TC: O(nlogn)+O(n)
bool cmp(pair<double,pair<int,int>>&a,pair<double,pair<int,int>>&b){
    return a.first>b.first;
}

double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    vector<pair<double,pair<int,int>>> vec;

    for (int i =0;i<n;i++){
        double value_per_item = static_cast<double>(items[i].second)/items[i].first;
        vec.push_back(make_pair(value_per_item,items[i]));
    }
    sort(vec.begin(),vec.end(),cmp);

    int curr_weight = 0;
    double curr_value =0.0;


    for(int i=0;i<n;i++){
        double value_pe_weight = vec[i].first;
        int weight = vec[i].second.first;
        double value = vec[i].second.second;


        if(curr_weight+weight <=w){
            curr_weight += weight;
            curr_value += value;
        }else{
            double remaining = w-curr_weight;
            curr_value += value_pe_weight * remaining;
            break;
        }
    }

    return curr_value;

}
