/* Input: num = "52"
Output: "5"
Explanation: The only non-empty substrings are "5", "2", and "52". "5" is the only odd number.

Input: num = "4206"
Output: ""
Explanation: There are no odd numbers in "4206". */

 string largestOddNumber(string num) {
        int ind=num.length()-1;
        while(ind>=0 && ((num[ind]-'0')&1)==0)ind--;
        return num.substr(0,ind+1);
    }
