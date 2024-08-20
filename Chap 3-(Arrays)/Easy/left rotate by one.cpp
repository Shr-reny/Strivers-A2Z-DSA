/* Aim is to rotate the array by one place to the left. */


/* BRUTE FORCE:
 Here we create another vector for storing the elements from second element onwards and then manually pushing the first element at last.
Here time complexity is O(N) and space complexity is O(N) as well as new array is created */

vector<int> rotateArray(vector<int>& arr, int n) {
   vector<int>temp;
   for(int i=1;i<n;i++)
   {
       temp.push_back(arr[i]);
   }
    temp.push_back(arr[0]);
   return temp;
}

/* OPTIMAL SOLUTION:
Here we don't create extra array and just do swappings within the same one so,
Time complexity is O(N) but space complexity is O(1) */

vector<int> rotateArray(vector<int>& arr, int n) {
    int temp=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}
