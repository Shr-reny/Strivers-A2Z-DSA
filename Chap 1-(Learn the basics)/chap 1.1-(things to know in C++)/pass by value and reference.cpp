/* Arguments to a function can be passed by passing values or references.
When we pass values to a function, we send it a copy of the variable to perform the function and original value stays same.
When we pass references to a function, we send addresses to it which means the original value gets modified by the function.
This program will define two functions: max and swap which will demonstrate pass by value and reference respectively.*/

#include <iostream>
using namespace std;
/* max function - value */
int Maximum(int x, int y)
{
	if(x>y) return x;
	else return y;
}
/* swap function - reference */
void Swap(int &x, int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
	int test, a, b, r;
	cin >> test;
	cin >> a >> b;
  /* switch case */
	switch (test)
	{
	case 1:
		r = Maximum(a, b);
		cout << r;
		break;
	case 2:
		Swap(a, b);
		cout << a << " " << b;
		break;
	default:
		cout << "Invalid test option";
	}
	return 0;
}

/* 1 means max and 2 means swap.
  Input= 
  1
  2 3 
  Output= 3 */
