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




