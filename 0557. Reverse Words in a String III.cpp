// Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

// Example 1:
// Input: s = "Let's take LeetCode contest"
// Output: "s'teL ekat edoCteeL tsetnoc"

// Example 2:
// Input: s = "Mr Ding"
// Output: "rM gniD"

class Solution {
public:
     string reverseWords(string s) {
        s=s+" ";
        string words="";
        string result="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                words=words+s[i];
            }
            else{
                reverse(words.begin(),words.end());
                if(result==""){
                    result=words;
                }
                else{
                    result=result+" "+words;
                 }
                
                words="";
            }
        }
        return result;
            
    }
};
// string j;
        // int end=0;
        // int start=0;
        // int k=-1;
        // s=s+" ";
        // for(int i=0;i<s.size();i++)
        // {
        //     if(s[i]!=' ')
        //     {
        //           k++;
        //     }
        //     else
        //     {
        //         start=k;
        //         for(int i=start;i>=end;i--)
        //         {
        //             j=j+s[i];
        //         }
        //         if(start!=s.size()-2){
        //         j=j+' ';
        //         k++;
        //         end=start+2;
        //         }
              
               
        //     }

        // }
        // return j;
