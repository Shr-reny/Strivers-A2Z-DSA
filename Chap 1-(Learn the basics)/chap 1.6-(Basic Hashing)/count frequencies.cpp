/* Aim is to return the frequency of each element present in an array or vector.
General template is:

unordered_map<int,int>mp;
for(int i=0;i<n;i++)
{
mp[v[i]]++;
}
*/

vector<int> countFrequency(int n, int x, vector<int> &nums){
   vector<int>hash(n,0);
   for(int i=0;i<n;i++)
   {
       hash[nums[i]-1]++;
   }
   return hash;
}
