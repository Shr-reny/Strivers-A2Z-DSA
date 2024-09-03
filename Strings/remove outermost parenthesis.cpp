/* Input: s = "(()())(())"
Output: "()()()"
Explanation: 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".

Input: s = "(()())(())(()(()))"
Output: "()()()()(())"
Explanation: 
The input string is "(()())(())(()(()))", with primitive decomposition "(()())" + "(())" + "(()(()))".
After removing outer parentheses of each part, this is "()()" + "()" + "()(())" = "()()()()(())". */

 string removeOuterParentheses(string s) {
        string str="";
        int k=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
                if(s[i]=='(')
                {
                    if(k>0)
                    {str+=s[i];}
                    k++;
                }
                else
                {
                    k--;
                    if(k>0){
                    str+=s[i];}
                }          
        }
        return str;
    }
