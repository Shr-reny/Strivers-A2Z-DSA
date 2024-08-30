/* Given an integer array arr of size N, sorted in ascending order (with distinct values).
   Now the array is rotated between 1 to N times which is unknown. Find the minimum element in the array. 

  Brute approach is linear search that will take O(n), to get O(logN) we use binary search */

int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0,h=n-1;
        int ans=INT_MAX;
        if(nums[l]<nums[h]) return nums[0];
        while(l<=h)
        {
            int m=(l+h)/2;
            // check if left half is sorted if yes, first set it's min (arr[low]) as ans then eliminate
            if(nums[l]<=nums[m])
            {
                ans=min(nums[l],ans);
                l=m+1;
            }
            // check if right half is sorted if yes, first set it's min (arr[mid]) as ans then eliminate
            else 
            {
                ans=min(nums[m],ans);
                h=m-1;
            }
        }
        return ans;
    }
