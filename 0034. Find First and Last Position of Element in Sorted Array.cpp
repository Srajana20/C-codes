// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].
// You must write an algorithm with O(log n) runtime complexity.

// Example 1:
// Input: nums = [5,7,7,8,8,10], target = 8
// Output: [3,4]

// Example 2:
// Input: nums = [5,7,7,8,8,10], target = 6
// Output: [-1,-1]

// Example 3:
// Input: nums = [], target = 0
// Output: [-1,-1]

int firstOcc(vector<int> nums, int target);
int lastOcc(vector<int> nums, int target);
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>result;
        int first = firstOcc(nums,target);
        int last = lastOcc(nums,target);
        result.push_back(first);
        result.push_back(last);
        return result;
    }
};


int firstOcc(vector<int> nums,int target){
    int ans=-1;
    int start=0;
    int end = nums.size()-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(nums[mid]==target){
            ans=mid;
            end=mid-1;
        }
        else if(nums[mid]>target){
            end=mid-1;
        }
        else if(nums[mid]<target){
            start=mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOcc(vector<int> nums,int target){
    int ans=-1;
    int start=0;
    int end = nums.size()-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(nums[mid]==target){
            ans=mid;
            start=mid+1;
        }
        else if(nums[mid]>target){
            end=mid-1;
        }
        else if(nums[mid]<target){
            start=mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
