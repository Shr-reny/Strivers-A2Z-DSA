/* leaders are the one which has all elements lower in value following it on right. In this context, the rightmost element is always the leader */

/* OPTIMAL SOL:
/* TC is O(N) and SC is O(N) as well */
vector<int> superiorElements(vector<int>&a) {
    int n=a.size();
    int maxi=a[n-1];
        vector<int>ans;
        ans.push_back(a[n-1]);
        for(int i=n-2;i>=0;i--)
        {
            
            if(a[i]>=maxi)
            {
                 maxi=a[i];
                ans.push_back(a[i]);
               
            }
        }
        reverse(ans.begin(),ans.end()); 
        return ans;
}
