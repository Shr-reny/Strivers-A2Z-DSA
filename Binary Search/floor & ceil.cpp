/* You're given an sorted array arr of n integers and an integer x. Find the floor and ceiling of x in arr[0..n-1].
The floor of x is the largest element in the array which is smaller than or equal to x.
The ceiling of x is the smallest element in the array greater than or equal to x. */

int floor(int x, vector<int> &arr)
    {
        int n=arr.size();
        int l=0,h=n-1,f=-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(arr[m]<=x)
            {
                l=m+1;
                f=arr[m];
            }
            else
            {
                h=m-1;
            }
        }
        return f;
    }
    int ceil(int x, vector<int> &arr)
    {
        int n=arr.size();
        int l=0,h=n-1,c=-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(arr[m]>=x)
            {
                h=m-1;
                c=arr[m];
            }
            else
            {
                l=m+1;
            }
        }
        return c;
    }
   
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        sort(arr.begin(),arr.end());
        vector<int>v;
        int f=floor(x,arr);
        int c=ceil(x,arr);
        v.push_back(f);
        v.push_back(c);
        return v;
    }
