/* Given two strings s and t, return true if t is an anagram of s, and false otherwise.

Input: s = "anagram", t = "nagaram"
Output: true

Input: s = "rat", t = "car"
Output: false
*/

bool isAnagram(string s, string t) {
        unordered_map<char,int>mp;
        for(auto it:s)
        {
            mp[it]++;
        }
        for(auto it:t)
        {
            mp[it]--;
        }
        for(auto it:mp)
        {
            if(it.second!=0) return  false;
        }
        return  true;
    }
