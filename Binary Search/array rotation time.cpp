/* Given an integer array arr of size N, sorted in ascending order (with distinct values).
   Now the array is rotated between 1 to N times which is unknown. Find how many times the array has been rotated. 
   We can find the minimum element and it's index is the number of times array is rotated.

   TC is O(logN) and SC is O(1) */

int findKRotation(vector<int> &arr) {
        int n=arr.size();
        int l=0,h=n-1,ans=INT_MAX,ind=-1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(arr[l]<arr[h])
            {
                if(ans>arr[l]){
                ans=arr[l];
                ind=l;}
                break;
            }
            if(arr[l]<=arr[m])
            {
                if(ans>arr[l]){
                ans=arr[l];
                ind=l;}
                l=m+1;
            }
            else
            {
                if(ans>arr[m]){
                ans=arr[m];
                ind=m;}
                h=m-1;
            }
        }
        return ind;
    }
