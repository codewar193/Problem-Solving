/*
Your task is to calculate ab mod 1337 where a is a positive integer and b is an extremely large positive integer given in the form of an array.*/



class Solution {
public:

    /*int superPow(int a, vector<int>& b) {
        long b_long=0 ;//using this method only pass 5 test cases
        
        int ans=1;
        int n =1337;
       if(b.size()>1)
       {
            for(int i=0;i<b.size();i++)
        {
            b_long= b_long+  (b[i]*10) ;
        }
       }
       else{
           b_long= b[0];
       }

     while(b_long>0)
     {
        if((b_long&1)!=0){ //(b_long %2)!=0)
            ans=(ans*a%n)%n;
        }
        a= ((a%n)*(a%n))%n;
      b_long = b_long>>1;  //or  b=b/2;
     }
 return ans;
    }*/
     int superPow(int a, vector<int>& b) {
        
        int temp = 1, ans;
        a = a%1337;
        for(int i=0;i<b.size();i++) {
            temp = (temp*calculate(a,b[i]))%1337;
            ans = temp;
            temp = calculate(temp,10);
        }
        return ans;
    }
    
    int calculate(int base, int power) {
        int ans = 1;
        for(int i=0;i<power;i++) {
            ans = (ans * base)%1337;
        }
        return ans;
    }
};
