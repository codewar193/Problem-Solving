/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.
Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
*/





class Solution {
public:
    bool isPalindrome(string s) {


for(int i=0,j=s.size()-1;j>i;i++,j--)
{
    while(isalnum(s[i])==false && i<j)i++;
    while(isalnum(s[j])==false && i<j)j--;
     if(toupper(s[i])!=toupper(s[j]))return false;
}

return true;
    }


};
