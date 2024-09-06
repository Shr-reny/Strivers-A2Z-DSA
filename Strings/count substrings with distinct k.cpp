/* Given a string of lowercase alphabets, count all possible substrings (not necessarily distinct) that have exactly k distinct characters. 

Input: S = "aba", K = 2
Output:3
Explanation:The substrings are: "ab", "ba" and "aba".
  
Input: S = "abaaca", K = 1
Output: 7
Explanation: The substrings are: "a", "b", "a", "aa", "a", "c", "a". */

/* TC is O(N2) */

long long int substrCount (string s, int k) {
    	int n=s.length();
    	long long int res=0;
    	int cnt[26];
    	for(int i=0;i<n;i++)
    	{
    	    memset(cnt, 0, sizeof(cnt));
    	    int dis=0;
    	    for(int j=i;j<n;j++)
    	    {
    	        if(cnt[s[j]-'a']==0)
    	        {
    	            dis++;
    	        }
    	        cnt[s[j]-'a']++;
    	        if(dis==k) res++;
    	        if(dis>k) break;
    	    }
    	}
    	return res;
    }

/* TC is O(N) */

int most_k_chars(string& s, int k)
{
    if (s.size() == 0) {
        return 0;
    }
    unordered_map<char, int> map;
    int num = 0, left = 0;

    for (int i = 0; i < s.size(); i++) {
        map[s[i]]++;
        while (map.size() > k) {
            map[s[left]]--;
            if (map[s[left]] == 0) {
                map.erase(s[left]);
            }
            left++;
        }
        num += i - left + 1;
    }
    return num;
}

int exact_k_chars(string& s, int k)
{
    return most_k_chars(s, k) - most_k_chars(s, k - 1);
}
