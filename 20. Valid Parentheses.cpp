class Solution {
public:
    char pair(char c)
    {
        switch(c)
        {
            case ')': return '(';
            case ']': return '[';
            case '}': return '{';
        }
        return '\0';
    }
    bool isValid(string s) {
        char *stack = new char[(s.size()+1)/2];
        char *p = stack;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            {
                *p = s[i];
                p++;
            }
            else if(*(--p)==pair(s[i]))
                ;
            else
            {
                delete [] stack;
                return false;
            }
        }
        if(p==stack)
        {
            delete [] stack;
            return true;
        }
        delete [] stack;
        return false;
    }
};
