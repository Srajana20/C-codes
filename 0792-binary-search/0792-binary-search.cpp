class Solution {
public:
    int search(vector<int>& nums, int target) {
        int k;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                k=i;
                break;
            }
            else{
                k=-1;
            }
           
        }
         return k;
        
    }
};