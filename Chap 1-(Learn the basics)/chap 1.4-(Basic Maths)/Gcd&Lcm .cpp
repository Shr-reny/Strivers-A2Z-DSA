/* Traverse till minimum of a and b and then check if divisible by both a and b */
/* Complexity : O(n) */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num1 = 4, num2 = 8;
	int ans;
	for (int i = 1; i <= min(num1, num2); i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			ans = i;
		}
	}
	cout << "The GCD of the two numbers is "<<ans;
	int lcm=(a*b)/ans;
	cout <<"The LCM of the two numbers is "<<lcm;
}

/* We can use the Euclidean theorem which says if a number is divided by both a and b, it is should be divided by (a-b) and b as well. */
/*Complexity: O(logɸmin(a,b)), where ɸ is 1.61 */

#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
int main()
{

	int a = 4, b = 8;
	cout <<"The GCD of the two numbers is "<<gcd(a, b);
	int g=gcd(a,b);
	int lcm=(a*b)/g;
	cout <<"The LCM of the two numbers is "<<lcm;
}
