/* The aim is to print numbers from 1 to n without using loops */

vector<int>ans;
int i=1;
vector<int> printNos(int x) {
    if(i==x+1)
    return ans;
    ans.push_back(i);
    i++;
    return printNos(x);
}

/*second approach*/
void print(int n)
{
    if(n==0) return;
    print(n-1);
    cout<<n<<" ";
}
