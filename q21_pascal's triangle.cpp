
/*
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]

*/


/*
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v={{1}};


        for(int i =1;i<numRows;i++)
        {
            vector<int> v1;
            v1.push_back(1);

            for(int j=1;j<=i-1;j++)
            {
              v1.push_back(v[i-1][j-1]+v[i-1][j]);
            }
            v1.push_back(1);
            v.push_back(v1);
        }
        return v;
    }
};


*/