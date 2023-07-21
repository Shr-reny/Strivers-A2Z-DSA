/* return a sorted array containing all the factorial numbers less than n */
/* if n=7, return 1,2,6 */

long long fact(int n)
{
    if(n==1) return 1;
    return n* fact(n-1);
}
vector<long long> factorialNumbers(long long n) {
   vector<long long>ans;
   long long a=1;
   for(long long i=1;i<=n;i++)
   {
       a=fact(i);
       if(a<=n)
       ans.push_back(a);
       else break;
   }
   return ans;
}
