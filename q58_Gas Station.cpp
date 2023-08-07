class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_gas =0;
        int total_cost = 0;
        int n = gas.size();
        int tank=0;
        int index=0;



        for(int i =0;i<n;i++){

          total_gas+= gas[i];
          total_cost+=cost[i];
          tank=tank+gas[i]-cost[i];

          if(tank<0){
            tank =0;
            index = i+1;
          }
        }
        if(total_gas>= total_cost)return index;
        return -1;

    }
};
