/* Input: strs = ["flower","flow","flight"]
Output: "fl"

Input: strs = ["dog","racecar","car"]
Output: ""
  */

string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s;
        int n=strs.size();
        string f=strs[0],l=strs[n-1];
        for(int i=0;i<min(f.size(),l.size());i++)
        {
            if(f[i]!=l[i]) return s;
            s+=f[i];
        }
        return s;
    }
