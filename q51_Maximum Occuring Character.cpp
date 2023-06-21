//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        vector<int> arr(26, 0);
        
        for(int i = 0; i < str.length(); i++)
        {
            char ch = str[i];
            if(ch >= 'a' && ch <= 'z')
            {
                arr[ch - 'a']++;
            }
            else if(ch >= 'A' && ch <= 'Z')
            {
                arr[ch - 'A']++;
            }
        }
        
        int maxFreq = 0;
        int ans = 0;
        
        for(int i = 0; i < 26; i++)
        {
            if(arr[i] > maxFreq)
            {
                maxFreq = arr[i];
                ans  = i;
            }
        }
        char maxChar = 'a'+ans;
        return maxChar;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends
