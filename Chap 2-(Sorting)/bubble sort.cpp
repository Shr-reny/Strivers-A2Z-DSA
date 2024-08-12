/* Bubble sort suggests that we sort by swapping the adjacent elements in ascending order. 
This swapping continues till there is no more possible swaps in the array. Array starts getting start from last or bottom */
/* In one round of swapping largest element will always settle at the bottom so we don't
need to run till end everytime. Subsequently second last will be placed at it's place and so on*/
/* Time complexity for avg and worst case is O(n*n) and best case is O(n) when array is sorted */

void bubbleSort(int arr[], int n) 
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                // swap(arr[j],arr[j+1]);
            }
        }
    }
}

/* RECURSIVE APPROACH */
void bubbleSort(int arr[], int n) 
{
    if(n==1) return;
   
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            // swap(arr[j],arr[j+1]);
            }
    }

    return bubbleSort(arr,n-1);
}
