/* We have to remove duplicates from array and return the array with unique elements and size
We use two pointers i and j and compare and then put it in front and return */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        for(int j=1;j<n;j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];

            }
        }
        return i+1;
    }
};
