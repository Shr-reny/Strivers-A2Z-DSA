/* Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
A shift on s consists of moving the leftmost character of s to the rightmost position.
For example, if s = "abcde", then it will be "bcdea" after one shift.
 
Input: s = "abcde", goal = "cdeab"
Output: true

we simultaneously check that the substrings on both sides of rotated index x are same or not */

bool rotateString(string s, string goal) {
        int n=s.size();
        if(s.size()!=goal.size()) return false;
        if(s.size()==1) return false;
        int x=0;
        while(x<n)
        {
            if((s.substr(x,n-x)==goal.substr(0,n-x)) &&
            (s.substr(0,x)==goal.substr(n-x,x))) return true;
            else x++;
        }
        return false;
    }
