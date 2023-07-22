/* Aim is to return the element with min and max frequency */

vector<int> getFrequencies(vector<int>& v) {
    map<int,int>mp;
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        mp[v[i]]++;
    }
    int ans1,ans2;
    int min=INT_MAX;
    int max=INT_MIN;
    for(auto i: mp)
    {
        if(i.second>max)
        {
            max=i.second;
            ans1=i.first;
        }
        if(i.second<min)
        {
            min=i.second;
            ans2=i.first;
        }
    }
    return {ans1,ans2};
}
