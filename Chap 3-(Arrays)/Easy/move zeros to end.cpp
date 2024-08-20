/* Aim is to move the zeros present in the array to the end */
/* BRUTE FORCE:
TC is O(N+K) and SC is 0(N) */

vector<int> moveZeros(int n, vector<int> a) {
    vector<int>temp;
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            temp.push_back(a[i]);      
        }
        else{
            k++;
        }
    }
     for(int i=0;i<k;i++)
     {
         temp.push_back(0);
     }
     return temp;
}

/* OPTIMAL SOL:
TC is O(n) and SC is O(1). We're identfying non-sero numbers and swapping them with the left most positions 
subsequently pushing zeroes to the end */

vector<int> moveZeros(int n, vector<int> a) {
    if(n==1) return a;
    int j=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                swap(nums[j],nums[i]);
                j++;
            }
        }
}
