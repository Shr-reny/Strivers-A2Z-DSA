/*
   The lower bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater 
   than or equal to a given key i.e. x.
   The upper bound algorithm finds the first or the smallest index in a sorted array where the value at that index is greater 
   than the given key i.e. x.
   The code takes O(log2N) time complexity. 
  
  In C++, there are pre-built functions lower_bound and upper_bound 
  
*/

 int lowerBound(vector<long long> &v, long long n, long long x) {

        int l=0,h=n-1;
        int ans=-1;
        if(v[0]>x) return -1;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(v[m]<=x)
            {
                ans=m;
                l=m+1;
            }
            else
            {
                h=m-1;
            }
        }
        return ans;
    }

/* Upper bound */

int upperBound(vector<int> &arr, int x, int n) {
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] > x) {
            ans = mid;
            //look for smaller index on the left
            high = mid - 1;
        }
        else {
            low = mid + 1; // look on the right
        }
    }
    return ans;
}
