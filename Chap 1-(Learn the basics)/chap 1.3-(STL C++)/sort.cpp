Sorting is one of the most standard operations used very frequently while writing programs. 
Writing the complete sorting algorithm might be time consuming and hence STL provides us with a standard inbuilt function to sort any container very easily.

Benefits of using sort():

Ease of implementation, omits writing lengthy code to implement different sorting algorithms.
Need not to worry about time complexity, it’s one of the most efficient functions with a N*logN time complexity and uses a mix of 
quicksort and mergesort in its internal implementation.
  
Syntax:
The sort() function in STL accepts two mandatory parameters: begin, and end, and sorts the range with-in the container in ascending order by default.

sort(begin, end)
begin: It is an iterator pointing to the first element of a container.
end: It is an iterator pointing to element just after the last element of the container.
  
Example 1:

int arr[] = {4,2,1}

sort(arr, arr+3);

Output: arr[] = {1,2,4}
Example 2:

vector<int> vec = {4,2,1}

sort(vec.begin(), vec.end());

Output: vec = {1,2,4}
Code:

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    int arr[] = {4,2,1};

    sort(arr, arr+3);
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
    return 0;
}
Output:

1 2 4
Can we also sort a container in descending order using sort()?

Yes, by using comparators. The role of a comparator in most functions is to compare between two elements before performing an operation.

sort() function accepts an optional third parameter which is a comparator that allows us to define a custom comparison check between two elements while sorting them. In order to sort the container in descending order, we need to put the greater element first while comparing between two elements.

In STL, we already have a comparator defined to do this which is called greater(). We just need to pass this greater<container_data_type>() as the third parameter to sort function as shown in the below codes and it will sort the comparator in descending order.

Code:

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    int arr[] = {4,2,1};

    sort(arr, arr+3, greater<int>());
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    
    return 0;
}
Output:

4 2 1

Can we also sort the container in a custom order – defined by a custom container?

Yes, we can. We can write a custom comparator to compare between any two elements however we wish to do it and it can 
then be used to sort the entire container accordingly.

But wait, isn’t sorting is of just two types ascending and descending? Why do we need a custom sorting algorithm?

Before we answer that, can you think of using the sort() function with a vector of pairs where the vector needs to sorted according 
to the second element of all pairs? or Say an array of structures?

This is where we need comparators. To sort custom data types defined by users based on custom parameters.

Let’s understand this by the example of vector of pairs where the vector needs to sorted in ascending order of second element of all pairs.

Below is a valid comparator for this:

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
The above function accepts two pairs “a” and “b”, and returns true if second element of first pair is smaller than second element of second
pair and if not then it returns false.

Code:

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 

int main() {
    
    vector<pair<int, int> > vec = {{10,3}, {20, 1}, {30, 2}};
    
    sort(vec.begin(), vec.end(), sortbysec);
    
    for(int i=0; i<3; i++)
    {
        cout<<vec[i].first<<" "<<vec[i].second<<"\n";
    }
    
    return 0;
}
Output:

20 1
30 2
10 3
