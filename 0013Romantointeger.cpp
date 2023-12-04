// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

// Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

// I can be placed before V (5) and X (10) to make 4 and 9. 
// X can be placed before L (50) and C (100) to make 40 and 90. 
// C can be placed before D (500) and M (1000) to make 400 and 900.
// Given a roman numeral, convert it to an integer.

 

// Example 1:

// Input: s = "III"
// Output: 3
// Explanation: III = 3.
// Example 2:

// Input: s = "LVIII"
// Output: 58
// Explanation: L = 50, V= 5, III = 3.
// Example 3:

// Input: s = "MCMXCIV"
// Output: 1994
// Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.






class Solution {
public:
    int romanToInt(string s) {
    int a,b,c,d,e,f,g;
    int sum=0;
    for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I')
            {
                if(s[i+1]=='V')
                {
                    a=4;
                    sum=sum+a;
                    i++;
                }
                else if(s[i+1]=='X')
                {
                    a=9;
                    sum=sum+a;
                    i++;
                }
                else{
                    a=1;
                    sum=sum+a;
                }
               
            }
            else if(s[i]=='V')
            {
                 b=5;
                 sum=sum+b;
            }
            else if(s[i]=='X')
            {
                if(s[i+1]=='L')
                {
                    c=40;
                    sum=sum+c;
                    i++;
                }
                else if(s[i+1]=='C')
                {
                    c=90;
                    sum=sum+c;
                    i++;
                }
                else{
                 c=10;
                 sum=sum+c;
                }

            }
              else if(s[i]=='L')
            {
                 d=50;
                 sum=sum+d;
            }
            else if(s[i]=='C')
            {
                 if(s[i+1]=='D')
                {
                     f=400;
                     sum=sum+f;
                     i++;
                }
                else if(s[i+1]=='M')
                {
                     f=900;
                    sum=sum+f;
                    i++;
                }
                else{
                    f=100;
                    sum=sum+f;
                }
                 
            }
            else if(s[i]=='D')
            {
               
                e=500;
                 sum=sum+e;
            }
            else if(s[i]=='M')
            {
                 g=1000;
                 sum=sum+g;
            }


        }
   return sum;

    }
};
