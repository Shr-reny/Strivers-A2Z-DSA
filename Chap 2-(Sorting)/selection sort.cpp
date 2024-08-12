/* It means we will select the unsorted array then find the minimum element and swap it with the
first element in the selected range. The array will be sorted from start or front*/
/* Time complexity = O(n*n) for all best, worst, average cases */

void selectionSort(vector<int>&arr) {
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[min]>arr[j]) 
            {
                int temp=arr[min];
                arr[min]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
