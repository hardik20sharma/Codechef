#include<bits/stdc++.h>
using namespace std;

int precedence(char c)
{
    if(c == '^')                    return 3;
    else if(c == '*' || c == '/')   return 2;
    else if(c == '+' || c == '-')   return 1;
    else                            return -1;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int t; cin >> t;
    while(t--)
    {
        string str; cin >> str;
        string res = "";

        stack<char> s;
        s.push('X');

        for(char c : str)
            if(isalpha(c))
                res += c;
            else if(c == '(')
                s.push(c);
            else if(c == ')')
            {
                while(s.top() != 'X' && s.top() != '(')
                {
                    res += s.top();
                    s.pop();
                }
                
                if(s.top() == '(')
                    s.pop();
            }
            else
            {
                while(s.top() != 'X' && precedence(c) <= precedence(s.top()) )
                {
                    res += s.top();
                    s.pop();
                }
                s.push(c);
            }

        while(s.top() != 'X')
        {
            res += s.top();
            s.pop();
        }

        cout << res << "\n";
    }
}