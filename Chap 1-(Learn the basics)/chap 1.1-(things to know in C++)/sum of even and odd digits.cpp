/*
The aim is to return sum of the even and odd digits present in a number. By digits we mean the numbers and not index.
for ex:- n=132456 so sum of even=12 and sum of odd=9 */

int main() {
	int n;  
	cin >> n;
	int odd=0, even=0;
	while(n){
		if(n%2==0) even = even+n%10;
		else odd = odd+n%10;
		n = n/10;
	}
	cout <<even << " " <<odd;
}

/* Input= 552245
  Output= 8 15*/
