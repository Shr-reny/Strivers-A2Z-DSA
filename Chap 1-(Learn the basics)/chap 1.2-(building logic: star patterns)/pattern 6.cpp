#include <bits/stdc++.h>
using namespace std;

void pattern11(int N)
{
      
      int start =1;
      for(int i=0;i<N;i++){
          if(i%2 ==0) start = 1;
          else start = 0;
          
          for(int j=0;j<=i;j++){
              cout<<start;
              start = 1-start;
          }
        cout<<endl;
      }
}

int main()
{ 
    int N = 5;
    pattern11(N);

    return 0;
}

/*
Output 

1
01
101
0101
10101

  */
