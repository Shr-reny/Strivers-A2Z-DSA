/* Given an array nums, return true if the array was originally sorted in non-decreasing order, 
  then rotated some number of positions (including zero). Otherwise, return false. */
/* The approach is to check the number of times it breaks the sorted order or if first element is smaller than last if at last count<=1 then true else false */

class Solution {
public:
    bool check(vector<int>& nums) {
        int k=0;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]>nums[i])
            k++;
        }
         if(nums[n-1]>nums[0]) k++;
         return k<=1;
  }
};
