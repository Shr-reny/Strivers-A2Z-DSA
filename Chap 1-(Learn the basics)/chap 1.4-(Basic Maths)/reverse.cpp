/* We should get the remainder from the number and then eventually add it to reverse by 
multiplying it with 10 */
/* Complexity : O(n) */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N = 123;
    int num = N;
    int reverse = 0;
    while(N!=0)
    {
        int digit = N%10;
        reverse = reverse*10+digit;
        N = N/10;
    }
    cout<<"The reverse of the"<<num<<"is"<<reverse<<endl;
}

/* If there is a constraint of reversing numbers in 32-bit range only, if(n>INT_MAX/10 || n<INT_MIN/10) return 0; use this
condition within while loop */
