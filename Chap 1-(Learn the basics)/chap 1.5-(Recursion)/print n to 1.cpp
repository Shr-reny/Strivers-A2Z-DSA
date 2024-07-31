/* Aim is to print numbers in decreasing fashion from n to 1 */

vector<int>ans;
vector<int> printNos(int x) {
    if(x==0)
    return ans;
    ans.push_back(x);
    return printNos(x-1);
}

/*second approach*/
void print(int n)
{
    if(n==0) return;
    cout<<n<<" ";
    print(n-1);
}
