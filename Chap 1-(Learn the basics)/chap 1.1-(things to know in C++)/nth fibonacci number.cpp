/* 
  fibonacci series is where a number is a sum of the previous two numbers in the series except the first two numbers which are one.
  The series is 1 1 2 3 5 8 13 21...
  */
  
#include<bits/stdc++.h>
using namespace std;

int fibo(int n){
    if(n==1 || n==2) return 1;
    return  fibo(n-1) + fibo(n-2);
}


int main()
{
        int f;
        cin>>f;
        cout<<fibo(f); 
}

/* Input= 8
  Output= 21 */
