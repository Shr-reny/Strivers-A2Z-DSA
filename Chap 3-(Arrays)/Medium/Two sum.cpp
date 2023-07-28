/* Aim is to find two elements from array which give a sum of target */

/*BRUTE FORCE:
  TC is O(N*N) ans SC is O(1) */

string twoSum(int n, vector<int> &arr, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) return "YES";
        }
    }
    return "NO";
}

/* BETTER SOL:
  TC is O(N), where N = size of the array.
Reason: The loop runs N times in the worst case and searching in a hashmap takes O(1) generally. So the time complexity is O(N).

Note: In the worst case(which rarely happens), the unordered_map takes O(N) to find an element. In that case, the time complexity will be O(N2).
If we use map instead of unordered_map, the time complexity will be O(N* logN) as the map data structure takes logN time to find an element.

SC is O(N) as map is used */

string twoSum(int n, vector<int> &arr, int target) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return "YES";
        }
        mpp[num] = i;
    }
    return "NO";
}

/*OPTIMAL SOL:
  TC is O(N) + O(N*logN), where N = size of the array.
Reason: The loop will run at most N times. And sorting the array will take N*logN time complexity.

SC is  O(1) as we are not using any extra space.
Note: Here we are distorting the given array. So, if we need to consider this change, the space complexity will be O(N). */
  
string read(int n, vector<int> book, int target)
{
    sort(book.begin(),book.end());
    int a=0,b=n-1;
    for(int i=0;i<n;i++)
    {
        if(book[a]+book[b]==target) return "YES";
        else if(book[a]+book[b]<target) a++;
        else b--;
    }
    return "NO";
}

