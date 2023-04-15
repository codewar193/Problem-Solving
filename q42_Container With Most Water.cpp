/*
Medium LEVEL
Related topic: greedy,two pointer, arrary 
TC: O(n)

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.
Notice that you may not slant the container.
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int max=0;
        int a,b;

        while(i!=j)
        {
            if(height[i]<=height[j]){
                a= height[i];
                i++;
            }else{
                a=height[j];
                j--;
            }
            b= j-i+1;
           int area = a*b;
           if(max<area )max=area;
        }
        return max;
    }
};
