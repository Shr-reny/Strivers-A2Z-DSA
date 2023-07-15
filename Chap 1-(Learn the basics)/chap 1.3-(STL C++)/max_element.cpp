/*
Problem Statement: Given a vector find the maximum element of the vector.

Example 1:
Input: arr = {3,1,9,5,2}
Output: 9
Explanation: 9 is the maximum element.

Example 2:
Input: arr = {10,40,22,5,2}
Output: 40
Explanation: 40 is the maximum element.
The maximum element can be found using the STL function *max_element().

Syntax:
*max_element(first index,last index);

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
    
    cout<<"The maximum element is: "<<*max_element(v.begin(),v.end());
}

/*
Output:

The elements in the vector are: 4 2 5 9 1
The maximum element is: 9

*/

