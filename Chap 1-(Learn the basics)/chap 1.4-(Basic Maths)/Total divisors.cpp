/* As we know the divisors of a number will definitely be lesser or equal to the number, 
all the numbers between 1 and the number, are the possible candidates for the divisors. */
/* Time Complexity: O(n) */

#include<iostream>
using namespace std;

void printDivisorsBruteForce(int n){
	cout<<"The Divisors of "<<n<<" are:"<<endl;
	for(int i = 1; i <= n; i++)
		if(n % i == 0)
			cout << i << " ";	
	cout << "\n";
}	
int main(){
	printDivisorsBruteForce(36);	
return 0;
}

/*From the intuition, we can come to the conclusion that we don’t need to traverse all the candidates and if we found a single divisor,
we can also find another divisor(Here, we need to be careful, if the given number is a perfect square, like 36, 6 also give 6 as quotient. This is a corner case.) */
/* Time Complexity: O(sqrt(n)) */

#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;

void printDivisorsOptimal(int n){    
    cout<<"The Divisors of "<<n<<" are:"<<endl;
	for(int i = 1; i <= sqrt(n); i++)
		if(n % i == 0){
			cout << i << " ";
			if(i != n/i) cout << n/i << " ";
		}	
	cout << "\n";
}

int main(){
	printDivisorsOptimal(36);
        return 0;
}



