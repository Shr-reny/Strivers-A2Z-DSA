/* Aim is to find a subarray with max sum from an array */

/* BRUTE FORCE:
TC is O(n3) and SC is O(1) */

int maxSubarraySum(int arr[], int n) {
    int maxi = INT_MIN; // maximum sum

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            // subarray = arr[i.....j]
            int sum = 0;

            //add all the elements of subarray:
            for (int k = i; k <= j; k++) {
                sum += arr[k];
            }

            maxi = max(maxi, sum);
        }
    }
return maxi;
}

/* BETTER SOL:
TC is O(N2) and SC is   O(1) */

int maxSubarraySum(int arr[], int n) {
    int maxi = INT_MIN; // maximum sum

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            // current subarray = arr[i.....j]

            //add the current element arr[j]
            // to the sum i.e. sum of arr[i...j-1]
            sum += arr[j];

            maxi = max(maxi, sum); // getting the maximum
        }
    }

    return maxi;
}

/* OPTIMAL SOL: KADANE's Algorithm
TC is O(N) and SC is O(1) */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
         long long maxi=LONG_MIN;
    long long sum=0;
 
    for(int i=0;i<n;i++)
    {
        sum+=nums[i];
        maxi=max(maxi,sum);
        if (sum < 0) {
          sum = 0;
        }
    }
   
  return maxi;
  return -1;
    }
};

/*  This will return the sum even if it is negative. For sum to be positive add one if condition at last */
