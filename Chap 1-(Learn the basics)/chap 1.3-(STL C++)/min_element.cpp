/*
Problem Statement: Given a vector find the minimum element of the vector.


Example 1:
Input: arr = {3,1,9,5,2}
Output: 1
Explanation: 1 is the minimum element.

Example 2:
Input: arr = {10,40,22,5,2}
Output: 2
Explanation: 2 is the minimum element.
  
Syntax:
*min_element(first index,last index);

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v {4,2,5,9,1};
    cout<<"The elements in the vector are: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    cout<<"The minimum element is: "<<*min_element(v.begin(),v.end());

  
}
Output:

The elements in the vector are: 4 2 5 9 1
The minimum element is: 1
