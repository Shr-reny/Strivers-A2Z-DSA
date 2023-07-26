/* Aim is to find the max number of consecutive ones in an array */
/* TC is O(N) and SC is 0(1) */

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int k=0;
        int maxi=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                k++;
            }
            else
            {
                k=0;
            }
             maxi=max(maxi,k);
        }
        return maxi;
    }
};
