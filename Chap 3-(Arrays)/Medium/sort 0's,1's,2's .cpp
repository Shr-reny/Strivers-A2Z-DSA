/* Aim is to sort an array containing 0's,1's and 2's */

/* BRUTE FORCE:
The easiest way is to sort using STL.
TC is O(NlogN) and SC is O(1) */

class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
};

/* BETTER :
TC is O(N)+O(N) and SC is O(1) */

void sortArray(vector<int>& arr, int n) {

    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) cnt0++;
        else if (arr[i] == 1) cnt1++;
        else cnt2++;
    }

    //Replace the places in the original array:
    for (int i = 0; i < cnt0; i++) arr[i] = 0; // replacing 0's

    for (int i = cnt0; i < cnt0 + cnt1; i++) arr[i] = 1; // replacing 1's

    for (int i = cnt0 + cnt1; i < n; i++) arr[i] = 2; // replacing 2's

}

/* OPTIMAL SOL:

This problem is a variation of the popular #Dutch National flag algorithm. 

This algorithm contains 3 pointers i.e. low, mid, and high, and 3 main rules.  The rules are the following:

arr[0….low-1] contains 0. [Extreme left part]
arr[low….mid-1] contains 1.
arr[high+1….n-1] contains 2. [Extreme right part], n = size of the array
The middle part i.e. arr[mid….high] is the unsorted segment. 

TC is O(N) and SC is O(1) */

  class Solution {
public:
    void sortColors(vector<int>& a) {
        int n=a.size();
         int l=0,m=0,h=n-1;
    while(m<=h)
    {
        if(a[m]==0)
        {
            swap(a[l],a[m]);
            l++;
            m++;
        }
        else if(a[m]==2)
        {
            swap(a[m],a[h]);
            h--;
        }
        else{
            m++;
        }
    }
    }
};
