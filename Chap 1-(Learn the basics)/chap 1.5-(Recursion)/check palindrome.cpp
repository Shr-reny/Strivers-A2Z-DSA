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
