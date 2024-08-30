/* Given an array of N sorted integers. Every number in the array except one appears twice. Find the single number in the array.
   We consider the indices as even or odd and then compare with adjacent.
   TC is O(logN) and SC is O(1) */

  int singleNonDuplicate(vector<int>& nums) {
        int n =nums.size();
        int l=0,h=n-1;
        if(n==1) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        while(l<=h)
        {
            int m=(l+h)/2;
            if(nums[m]!=nums[m+1] && nums[m]!=nums[m-1]) return nums[m];
            if((m%2==1 && nums[m]==nums[m-1]) || (nums[m]==nums[m+1] && m%2==0))
            {
                l=m+1;
            }
            else h=m-1;
        }
        return -1;
    }
