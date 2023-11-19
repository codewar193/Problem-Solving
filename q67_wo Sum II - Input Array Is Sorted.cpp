class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n = numbers.size()-1;
         int i=0;
          int j=n;

          while(i<j){
              if(target > numbers[i] + numbers[j]){
                  i++;
              }else if(target < numbers[i] + numbers[j]){
                  j--;
              }else{
                  i = i+1;
                  j = j+1;
                  break;
              }
          }
          return {i,j};
    }
};
