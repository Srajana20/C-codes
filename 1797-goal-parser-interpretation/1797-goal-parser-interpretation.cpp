class Solution {
public:
    string interpret(string command) {
        string result="";
        for(int i=0;i<command.size();i++){
            if(command[i]=='G')
            {
               result = result+'G';
               

            }
            else if(command[i]=='(' && command[i+1]==')')
            {
                result=result+'o';
                i=i+1;
            }
            else 
            {
                result=result+"al";
                i=i+3;
            }
         
        }
         return result;
    }
};