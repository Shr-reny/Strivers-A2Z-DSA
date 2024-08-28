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

/* APPROACH 2 : This is also the optimized code for returning number of occurences of x */

int first(int arr[], int n, int x)
	{
	    int l=0,h=n-1,k=0,f=-1,la=-1;
	    while(l<=h)
	    {
	        int m=(l+h)/2;
	        if(arr[m]==x)
	        {
	            f=m;
	            h=m-1;
	        }
	        else if(arr[m]>x)
	        {
	            h=m-1;
	        }
	        else
	        {
	            l=m+1;
	        }
	    }
	}
	int last(int arr[], int n, int x)
	{
	    int l=0,h=n-1,k=0,f=-1,la=-1;
	    while(l<=h)
	    {
	        int m=(l+h)/2;
	        if(arr[m]==x)
	        {
	            la=m;
	            l=m+1;
	        }
	        else if(arr[m]>x)
	        {
	            h=m-1;
	        }
	        else
	        {
	            l=m+1;
	        }
	    }
	}
	
	int count(int arr[], int n, int x) {
	    int f=first(arr,n,x);
	    int la=last(arr,n,x);
	    return la-f;
	}
