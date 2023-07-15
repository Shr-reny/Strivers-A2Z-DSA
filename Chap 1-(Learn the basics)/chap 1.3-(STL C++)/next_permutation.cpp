/*
next_permutation in STL is a built-in function which as the name suggests returns the next lexicographically
greater permutation of the elements in the container passed to it as an argument.

Does it accept any parameters?

Yes, next_permutation() accepts two iterators (begin and end) of a container(example, an array or vector ) as parameters and
modifies the container to store the next lexicographically greater permutation of elements within the range [begin, end)

Does it return anything?

Yes, it returns true if a next lexicographically greater permutation is possible, otherwise, it returns false.

Syntax:

next_permutation(begin, end);

where, begin is a iterator pointing to 1st element 
of the container.
and, end is an iterator pointing to just after the 
last element of the container.

Example 1:
int arr[] = {1,2,3};
next_permutation(arr, arr+3);

Example 2:
vector<int> vec = {1,2,3};
next_permutation(vec.begin(), vec.end());

*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int arr[] = {1,3,2};
    
    next_permutation(arr,arr+3);//using in-built function of C++
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
    return 0;
}
/*

Output:
2 1 3

  */
