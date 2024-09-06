/* The beauty of a string is the difference in frequencies between the most frequent and least frequent characters.
For example, the beauty of "abaacc" is 3 - 1 = 2.
Given a string s, return the sum of beauty of all of its substrings.
Input: s = "aabcb"
Output: 5
Explanation: The substrings with non-zero beauty are ["aab","aabc","aabcb","abcb","bcb"], each with beauty equal to 1.

Input: s = "aabcbaa"
Output: 17
*/

int beautySum(string s) {
        int res=0,n=s.length();
        for(int i=0;i<n;i++)
        {
            map<char,int>mp;
            for(int j=i;j<n;j++)
            {
                mp[s[j]]++;
                int lf=INT_MAX, mf=INT_MIN;
                for(auto it:mp)
                {
                    lf=min(lf,it.second);
                    mf=max(mf,it.second);
                }
                res+=mf-lf;
            }
        }
        return res;
    }
