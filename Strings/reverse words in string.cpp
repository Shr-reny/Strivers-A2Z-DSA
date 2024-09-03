/* Input: s = "the sky is blue"
Output: "blue is sky the"

Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.

The resize() function reduces the size of the string to the given number */

string reverseWords(string s) {
        int n=s.length();
        int l=0,r=0,i=0;
        reverse(s.begin(),s.end());
        while(i<n)
        {
            while(i<n && s[i]==' ')i++;
            if(i==n) break;
            while(i<n && s[i]!=' ')
            {
                s[r++]=s[i++];
            }
            reverse(s.begin()+l,s.begin()+r);
            s[r++]=' ';
            l=r;
            i++;
        }
        s.resize(r-1);
        return s;
    }
