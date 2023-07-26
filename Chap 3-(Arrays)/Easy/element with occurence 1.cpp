
/* BRUTE FORCE:
We simply use two loops and pointers . */
/* TC is O(N*N) and SC is O(1) */

int getSingleElement(vector<int> &arr){
	int n=arr.size();
	int nums,cnt;
	for(int i=0;i<n;i++)
	{
		nums=arr[i];
		 cnt=0;
	
	for(int j=0;j<n;j++)
	{
		if(arr[j]==nums)
		cnt++;
	}
	if(cnt==1) return nums;
	}
	return -1;
}

/* BETTER SOL 1:
TC is O(3N) and SC is O(max element+1) */

int getSingleElement(vector<int> &arr) {
    int n = arr.size();
    int maxi = arr[0];
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i]);
    }
    vector<int> hash(maxi + 1, 0);
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (hash[arr[i]] == 1)
            return arr[i];
    }
    return -1;
}

/* BETTER SOL 2:
/* We can use map to get freq and then return the one with single freq */
/*TC is  O(N*logM) + O(M), where M = size of the map i.e. M = (N/2)+1. N = size of the array and SC is O(m) */

int getSingleElement(vector<int> &arr){
	int n=arr.size();
	map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		mp[arr[i]]++;
	}
	for(auto it:mp)
	{
		if(it.second==1) return it.first;
	}
	return -1;
}

/*OPTIMAL SOL:
We can use XOR operation for getting the number that occurs once as the rest numbers occur twice and their xor will be zero */

int getSingleElement(vector<int> &arr){
	int x=0;
	for(int i=0;i<arr.size();i++)
	{
		x=x^arr[i];
	}	
	return x;
}
