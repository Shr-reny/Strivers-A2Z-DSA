/* Given an integer array arr of size N, sorted in ascending order (with distinct values) and a target value k.
  Now the array is rotated at some pivot point unknown to you. Find the index at which k is present and if k is not present return -1. 
  
  Time complexity is O(logN) ans SC is O(1) */


int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,h=n-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(nums[m]==target) return m;
          // check if left subarray is sorted if yes, eliminate the right one
            if(nums[l]<=nums[m])
            {
                if(nums[l]<=target && target<=nums[m])
                {
                    h=m-1;
                }
                else l=m+1;
            }
              // check if right one sorted and eliminate left 
            else{
            if(nums[m]<=target && target<=nums[h])
            {
                l=m+1;
            }
            else h=m-1;
            }
        }
        return -1;
    }

/* This code worked when array has all unique elements. When array will have duplicate elements, there will be an edge case 
   arr[low]==arr[mid]==arr[high]. In this case we will simply add an extra check condition */

   int search(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0,h=n-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(nums[m]==target) return m;
          // If there are duplicates
            if(nums[l]==nums[m] && nums[m]==nums[h])
            {   
                l++;
                h--;
                continue;
            }
          // check if left subarray is sorted if yes, eliminate the right one
            if(nums[l]<=nums[m])
            {
                if(nums[l]<=target && target<=nums[m])
                {
                    h=m-1;
                }
                else l=m+1;
            }
              // check if right one sorted and eliminate left 
            else{
            if(nums[m]<=target && target<=nums[h])
            {
                l=m+1;
            }
            else h=m-1;
            }
        }
        return -1;
    }
