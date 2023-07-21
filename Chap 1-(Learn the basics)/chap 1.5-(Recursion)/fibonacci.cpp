/* generate fibonacci sequence upto n */

int fibo(int n)
{
    if(n<2) return n;
    else return fibo(n-1)+fibo(n-2);
}
vector<int>ans;
vector<int> generateFibonacciNumbers(int n) {
    for(int i=0;i<n;i++)
    {
        ans.push_back(fibo(i));
    }   
    return ans;
}
