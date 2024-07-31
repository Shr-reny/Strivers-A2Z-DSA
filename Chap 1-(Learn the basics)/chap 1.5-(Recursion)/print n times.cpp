/* Our aim is to use functions to implement recursion without using loops. This function will print n times */

vector<string>ans;
/* you have to declare vector outside orelse every time value will be pushed in a new vector */
vector<string> printNTimes(int n) {
  string val="Coding Ninjas";
	if(n==0)
	return ans;
	ans.push_back(val);
	return printNTimes(n-1);
}

/*second approach*/
void print(int n)
{
    if(n==0) return;
    print(n-1);
    cout<<"GFG"<<" ";
}
