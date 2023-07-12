#include <bits/stdc++.h>
using namespace std;

void pattern6(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j =N; j>i; j--)
        {
            cout <<N-j+1<<" ";
        }
        cout << endl;
    }
}

int main()
{  
    int N = 5;
    pattern6(N);

    return 0;
}

/*Output:
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1
  */
