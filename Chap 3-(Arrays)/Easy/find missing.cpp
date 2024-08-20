/* Aim is to find the missing number from the array containing 1 to n numbers */

/* BRUTE FORCE:
TC is O(n*n) and SC is O(1) */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N=nums.size();
        for (int i = 1; i <= N; i++) {
        int flag = 0;
        for (int j = 0; j < N - 1; j++) {
            if (nums[j] == i) {
                flag = 1;
                break;
            }
        }
         if (flag == 0) return i;
        }
        return -1;
    }
};


/* BETTER SOL:
TC is O(2*N) and SC is O(N) */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int hash[n+1]={0};
        for(int i=0;i<n;i++)
        {
            hash[nums[i]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(hash[i]==0)
            {
                return i;
            }
        }
        return -1;
    }
};

/* OPTIMAL SOL 1:
We can find sum of first n natural numbers and then subtract the current sum to find the missing number */
/* TC is O(N) and SC is O(1) */
  
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s=0;
        int n=nums.size();
        int sum=(n)*(n+1)/2;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
        }
        return sum-s;
    }
};

/* OPTIMAL SOL 2:
XOR of two same numbers is always 0 i.e. a ^ a = 0. ←Property 1.
XOR of a number with 0 will result in the number itself i.e. 0 ^ a = a.  ←Property 2 */
/* TC is O(N) and SC is O(1) */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
         for(int i=0;i<n;i++)
        {
            ans=ans^i;
        }
        for(int i=1;i<=n;i++)
        {
            ans=ans^nums[i];
        }
        return ans;
    }
};
