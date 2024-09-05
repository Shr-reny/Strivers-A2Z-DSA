/* Given a string s, sort it in decreasing order based on the frequency of the characters.
The frequency of a character is the number of times it appears in the string.
Return the sorted string. If there are multiple answers, return any of them.

Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
*/

string frequencySort(string s) {
        string str="";
        map<char,int>mp;
        for(auto it:s)
        {
            mp[it]++;
        }
        vector<pair<char,int>>v(mp.begin(),mp.end());
        sort(v.begin(),v.end(),[](const auto &a,const auto &b)
        {
            return a.second>b.second;
        });
        for(auto it:v)
        {
            str+=string(it.second,it.first);
        }
        return str;
    }
