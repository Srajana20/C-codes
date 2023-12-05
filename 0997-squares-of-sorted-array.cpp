Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

 

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
 


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result1;
       
        for(int i=0;i<nums.size();i++){
            result1.push_back(pow(nums[i],2));
        }
         sort(result1.begin(),result1.end());
        return result1;
    }
};
