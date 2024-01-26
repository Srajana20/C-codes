// Online C++ compiler to run C++ program online
//array is given ,Find how many times the target value has appeared
#include <iostream>
#include <vector>
using namespace std;
int firstOcc(vector<int> arr,int target){
    int ans=-1;
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }
        else if (arr[mid]>target){
            end=mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOcc(vector<int> arr,int target){
    int ans=-1;
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;
        }
        else if (arr[mid]>target){
            end=mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main() {
    vector<int> arr={1,2,3,3,3,3,5,9};
    int target = 3;
    int first = firstOcc(arr,target);
    cout<<"First Occurence of Target value : "<<first<<endl;
    int last = lastOcc(arr,target);
    cout<<"Last Occurence of Target value : "<<last<<endl;
    cout<<"Count of occurence : "<<(last-first)+1<<endl;
    return 0;
}
