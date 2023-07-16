/*
Before we describe this function, can you think of a solution to the problem: “Count Set bits in a given integer?“,
In simple words, count the number of bit positions in binary representation of an integer which is set to 1?

How will you solve this problem?


int count_setbits(int N)
{ 
   int cnt=0;

   while(N>0)
   {
       cnt+=(N&1);
       N=N>>1;
   }

   return cnt;
}
Above is a simple solution to the problem.

The solution works as follows:

Until the given number is greater than zero, that is, until all bits in the number is not set to 0.
Keep on doing bitwise AND with the number 1, which has only first bit 1.
and, keep on shifting the bits by 1 place to right in the input number.
Simultaneously, keep on calculating count.
What if we could have solved this using a single line of code?

Yes, it’s possible using the function __builtin_popcount() in STL.

The function takes an unsigned integer as input parameter and returns the number of set bits present in that integer.

Syntax:

__builtin_popcount(int num);
Note: This function only works for unsigned or positive integers.

*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    int n = 7;
    
    cout<<__builtin_popcount(n);
    
    return 0;
}

/*
Output:

3
What if the integer is of the type “long long” and not fits in the range of int?

In that case, there is a separate function with slight variation in function name but serves exactly the same purpose. 
The function is __builtin_popcountll(). Notice the ll in the end of function name.

Below is the implementation of the above function:

*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    
    long long n = 77777777777777;
    
    cout<<__builtin_popcountll(n);
    
    return 0;
}
/*
Output:

23

*/
