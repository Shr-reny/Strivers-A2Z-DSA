/* Aim is to check if string is palindrome using recursion */

bool pal(int i, string s)
{
if(i>=s.size()/2) return true;
if(s[i]!=s[s.size()-i-1]) return false;
return pal(i+1,s);
}
bool isPalindrome(string& s) {
    return pal(0,s);
}

/* Leetcode problem having testcase like "A man, a plan, a canal: Panama" */

class Solution {
public:
    bool isPalindrome(string s) {
       int i=0, j=s.length();
       while(i<=j)
       {
           if(!isalnum(s[i])) {i++; continue;}
           if(!isalnum(s[j])) {j--; continue;}
           if(tolower(s[i])!=tolower(s[j])) {return false;}
           else
           {
               i++;
               j--;
           }
       }
       return true;
    }
};
