class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        int sum=0;
        int n = citations.size();
        vector<int>count(n+1,0);

       for(int citation: citations){
           if(citation >=n){
               count[n]++;
           }else{
               count[citation]++;
           }
       }

        for(int i =n;i>=0;i--){
           
                sum+=count[i];

                if(sum>=i)return i;

            
        }
        return 0 ;
    }
};
