/*  You are given a sorted array of integers and a target,your task is to search for the target in the given array.
Assume the given array does not contain any duplicate numbers.

1. Binary search is only applicable in a sorted search space. The sorted search space does not necessarily have to be a sorted array. 
It can be anything but the search space must be sorted.
2. In binary search, we generally divide the search space into two equal halves and then try to locate which half contains the target.
According to that, we shrink the search space size.

Time complexity is O(logN) */

int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(target>nums[mid]) low=mid+1;
            else high=mid-1;
        }
        return -1;  
    }
