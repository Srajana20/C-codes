class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0,i=1;
        while(i<num){
            if(num%i==0)
            {
                sum=sum+i;
            }
            i++;
        }
        if(sum==num){
            return true;
        }
        return false;
    }
};