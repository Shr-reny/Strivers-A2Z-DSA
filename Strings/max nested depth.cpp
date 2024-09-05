/* 

Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.

Input: s = "(1+(2*3)+((8)/4))+1"
Output: 3
Digit 8 is inside of 3 nested parentheses in the string.

Input: s = "(1)+((2))+(((3)))"
Output: 3
Digit 3 is inside of 3 nested parentheses in the string.

*/

int maxDepth(string s) {
        int n=s.length(),k=0,i=0,maxi=0;
        if(n<2) return 0;
        while(i<n)
        {
            if(s[i]=='(') 
            {k++;
            maxi=max(k,maxi);
            i++;}
            else if(s[i]==')')
            { k--;
            i++;}
            else
            i++;
        }
        return maxi;
    }
