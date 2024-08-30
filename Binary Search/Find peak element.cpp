/*Given an array of length N. Peak element is defined as the element greater than both of its neighbors.
  Formally, if 'arr[i]' is the peak element, 'arr[i - 1]' < 'arr[i]' and 'arr[i ]' > 'arr[i+1]'
  We should handle 3 edge cases first which is first element is peak, last one is peak and array has single element.
  We need to consider -infinity as leftmost and rightmost
  
  TC is O(logN) and SC is O(1) */

int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int l=1,h=n-2,ans=-1;
        if(n==1) return 0;
        if(nums[0]>nums[1]) return 0;
        if(nums[n-1]>nums[n-2]) return n-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(nums[m]>nums[m+1] && nums[m]>nums[m-1]) return m;
            if(nums[m]>nums[m-1])
            {
                l=m+1;
            }else h=m-1;
        }
        return 0;
    }
