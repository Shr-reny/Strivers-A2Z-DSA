/* Input: s = "egg", t = "add"

Output: true

Explanation:

The strings s and t can be made identical by:

Mapping 'e' to 'a'.
Mapping 'g' to 'd'.

*/

bool isIsomorphic(string s, string t) {
        int mp1[256]={0};
        int mp2[256]={0};
        int n =s.length();
        for(int i=0;i<n;i++)
        {
            if(mp1[s[i]]!=mp2[t[i]]) return false;
            mp1[s[i]]=i+1;
            mp2[t[i]]=i+1;
        }
        return true;
    }
