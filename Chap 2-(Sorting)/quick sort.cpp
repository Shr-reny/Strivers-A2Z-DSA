/* Quicksort also uses the concept of divide and conquer and uses a pivot element to divide. A pivot is chosen, placed at it's right position and
then the left and right subarrays are sorted. */
/* Time complexity is O(logn) but it is little better than merge sort in terms of space complexity,
where quick has O(1) and merge has O(n) as it sorts the array there itself without using extra space*/

int partitionArray(int input[], int start, int end) {
	int i=start;
	int j=end;
	int pivot=input[start];
	while(i<j)
	{
		while(input[i]<=pivot && i<=end-1)
		{
			i++;
		}
		while(input[j]>pivot && j>=start+1)
		{
			j--;
		}
		if(i<j) swap(input[i],input[j]);
	}
	swap(input[start],input[j]);
	return j;
}

void quickSort(int input[], int start, int end) {
    if(start<end)
	{
		int piv=partitionArray(input,start,end);
		quickSort(input,start,piv-1);
		quickSort(input,piv+1,end);
	}
}

/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);
*/
