class Solution {
public:
    bool isValid(string s) {
        int i, count = 0;
        stack<char> stk;
        for(i = 0; i < s.length(); i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                stk.push(s[i]);
            }
            else if(!stk.empty())
            {
                if((s[i] == ')' && stk.top() == '(') || (s[i] == '}' && stk.top() == '{') || (s[i] == ']' && stk.top() == '['))
                {
                    stk.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        return stk.empty();
    }
};