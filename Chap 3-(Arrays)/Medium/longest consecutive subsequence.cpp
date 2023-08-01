/* Aim is to find the longest subsequence consisting consecutive integers */

/* BRUTE FORCE:
 TC is O(N*N) and SC is O(1) */

bool linear(vector<int>&a,int num)
{
    int n=a.size();
    for(int i=0;i<n;i++)
    {
        if(a[i]==num) return true;
    }
    return false;
}
int longestSuccessiveElements(vector<int>&a) {
    int longest=1;
    int n=a.size();
    for(int i=0;i<n;i++)
    {
         int cnt=1;
    int x=a[i];
    while(linear(a,x+1)==true)
    {
        x=x+1;
        cnt=cnt+1;
    }
    longest=max(longest,cnt);
    }
    return longest;
}

/* BETTER APPROACH:
TC is O(NlogN) + O(N) and SC is O(1) */

int longestSuccessiveElements(vector<int>&a) {
   int n=a.size();
   int longest=1;
   int cnt=0;
   int last=INT_MIN;
   sort(a.begin(),a.end());
   for(int i=0;i<n;i++)
   {
       if(a[i]-1==last)
       {
           cnt+=1;
           last=a[i];
       }
       else if(a[i]!=last)
       {
           cnt=1;
           last=a[i];
       }
       longest=max(longest,cnt);
   }
   return longest;
}

/* OPTIMAL SOL:
TC is O(3*N), O(N) for putting all the elements into the set data structure. After that for every starting element, we are finding the consecutive elements.
Though we are using nested loops, the set will be traversed at most twice in the worst case. So, the time complexity is O(2*N) instead of O(N2).
SC is O(N) */

int longestSuccessiveElements(vector<int>&a) {
   int n=a.size();
   int longest=1;
   int cnt=0;
   unordered_set<int>st;
   for(int i=0;i<n;i++)
   {
       st.insert(a[i]);
   }
   for(auto it:st)
   {
       if(st.find(it-1)==st.end())
       {
           int x=it;
           cnt=1;
           while(st.find(x+1)!=st.end())
           {
               cnt+=1;
               x=x+1;
           }
           longest=max(longest,cnt);
       }
   }
   return longest;
}




