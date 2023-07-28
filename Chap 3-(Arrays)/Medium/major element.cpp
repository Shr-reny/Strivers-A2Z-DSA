/* Aim is to find the element which occurs more than n/2 times in array */
/* KADANE'S ALGORITHM */

/* BRUTE FORCE:
  TC is O(N*N) and SC is O(1) */

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        for(int i=0;i<size;i++)
        {
            int k=0;
            for(int j=0;j<size;j++)
            {
                if(a[j]==a[i])
                {
                    k++;
                }
            }
             if(k>(size/2)) return a[i];
        }
        return -1;
        
    }
};

/* BETTER SOL:
  TC is O(NlogN)+O(n) and SC is O(n) */

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
       map<int,int>mp;
       for(int i=0;i<size;i++)
       {
           mp[a[i]]++;
       }
       for(auto it:mp)
       {
           if(it.second>size/2)
           {
               return it.first;
           }
       }
       return -1;
        
    }
};

/* OPTIMAL SOL:
  TC is O(N)+O(N) and SC is O(1) */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int el;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(cnt==0)
            {
                cnt=1;
                el=nums[i];
            }
            else if(el==nums[i])
            {
                cnt++;
            }
            else cnt--;
        }
        int cnt1=0;
        for(int i=0;i<n;i++)
        {
            if(el==nums[i]) cnt1++;
        }
        if(cnt1>n/2) return el;
        return -1;
    }
};

