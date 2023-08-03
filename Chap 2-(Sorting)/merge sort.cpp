/* Merge sort uses the concept of divide and conquer. It first divides the array into two parts 
and continously divides until no further division can happen and then merges one by one */
/*Time complexity: O(nlogn) */

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSor(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2 ;
    mergeSor(arr, low, mid);  // left half
    mergeSor(arr, mid + 1, high); // right half
    merge(arr, low, mid, high);  // merging sorted halves
}

void mergeSort(vector<int>& arr, int low, int high) {
    int n=arr.size();
    mergeSor(arr,0,n-1);
}
