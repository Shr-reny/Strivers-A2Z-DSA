/* Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
   If target is not found in the array, return [-1, -1] */

vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>v;
        int n=nums.size();
        int l=0,h=n-1;
        int f=-1,la=-1;
        while(l<=h)
        {
            if(nums[l]<target)
            {
                l++;
            }
            else if(nums[h]>target)
            {
                h--;
            }
            else
            {
                f=l;
                la=h;
                break;
            }
        }
        v.push_back(f);
        v.push_back(la);
        return v;
    }
