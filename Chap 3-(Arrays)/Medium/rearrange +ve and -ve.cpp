/* Aim is to rearrange elements of an array in order to have alternating positive and negative elements */

/* BRUTE FORCE:
  TC is O(n)+O(n/2) and SC is 0(n) */

vector<int> alternateNumbers(vector<int>&a) {
    vector<int>pos;
    vector<int>neg;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
           pos.push_back(a[i]);
        }
        else{
            neg.push_back(a[i]);
        }
    }
    for(int i=0;i<n/2;i++)
    {
        a[2*i]=pos[i];
        a[2*i+1]=neg[i];
    }
    return a;
}

/*OPTIMAL SOL:
TC is O(N) and SC is 0(n) */

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int pos=0,neg=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            {
                ans[pos]=nums[i];
                pos+=2;
            }
            else
            {
                ans[neg]=nums[i];
                neg+=2;
            }
        }
        return ans;
    }
};
