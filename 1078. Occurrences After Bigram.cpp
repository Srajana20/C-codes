// Given two strings first and second, consider occurrences in some text of the form "first second third", where second comes immediately after first, and third comes immediately after second.
// Return an array of all the words third for each occurrence of "first second third".

// Example 1:
// Input: text = "alice is a good girl she is a good student", first = "a", second = "good"
// Output: ["girl","student"]

// Example 2:
// Input: text = "we will we will rock you", first = "we", second = "will"
// Output: ["we","rock"]

class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans;
        vector<string> result;

        istringstream iss(text);
        string word;
        while(iss>> word){
             ans.push_back(word);
        }

        for(int i=0;i<ans.size()-2;i++){
            if(ans[i]==first && ans[i+1]==second){
                result.push_back(ans[i+2]);
            }
        }
        return result;
    }
};
