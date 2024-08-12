/* Insertion sort compares an element with it's left element and places it at it's correct position.
So, array starts to be sorted from beginning and we iterate only in unsorted part */
/* Time complexity in worst and avg cases are O(n*n) and in best case is O(N) when array is sorted */

void insertion_sort(int arr[], int n)
{
  for(int i=0;i<n;i++)
    {
      int j=i;
      while(j>0 && arr[j-1]>arr[j])
        {
          swap(arr[j],arr[j-1];
          j--;
        }
    }
}


/*RECURSIVE APPROACH */

void insertion_sort(int arr[], int i, int n) {

    // Base Case: i == n.
    if (i == n) return;

    int j = i;
    while (j > 0 && arr[j - 1] > arr[j]) {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    insertion_sort(arr, i + 1, n);
}
