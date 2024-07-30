/* Palindrome can be simply checked by reversing a number and then matching with the original one. */

#include <iostream>
using namespace std;

int reverse(int X) {
   int Y = 0;
   while (X > 0) {
      //Extract the last digit
      int digit = X % 10;
      //Appending last digit
      Y = Y * 10 + digit;
      // Shrinking X by discarding the last digit
      X = X / 10;
   }
   return Y;
}
int main() {
   int X = 121;
   int dummy = X;
   int Y = reverse(X);
   if (dummy == Y) {
      cout << "Palindrome Number" << endl;
   } else {
      cout << "Not Palindrome Number" << endl;
   }
   return 0;
}

/* Another approach is to convert to string using to_string() and reverse function and matching. But this will have more time complexity than the one above */
