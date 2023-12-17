// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

// Example 1:
// Input: s = "anagram", t = "nagaram"
// Output: true

// Example 2:
// Input: s = "rat", t = "car"
// Output: false

class Solution {
public:
    bool isAnagram(string s, string t) {
        int flag;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.size()==t.size()){
            if(s==t){
                flag=1;
            }
            else{
                flag=0;
            }

        }
        
        if(flag==1)
        {
            return true;
        }
        return false;
        
    }
};
