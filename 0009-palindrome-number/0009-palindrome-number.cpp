class Solution {
public:
    bool isPalindrome(int x) {
          if(x>=0)
        {
        long k,rev=0;
        long num;
        num=x;
        while(num!=0)
        {
            k=num%10;
            rev=(rev*10)+k;
            num=num/10;
         }
         if(rev==x)
         {
             return true;
         }
        }
        
      return false;  
    }
};