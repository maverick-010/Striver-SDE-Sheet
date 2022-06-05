#include<bits/stdc++.h>
string reverseString(string s)
{
    stack<string>word;
        string ans="",stream = "";
        for(int i = 0;i<s.length();i++)
        {
            if(s[i] == ' ') continue;
            while(i<s.length() and s[i]!=' ')
            {    
                stream+=s[i];
                i++;
            }
            word.push(stream);
            stream = "";
        }
        while(!word.empty())
        {
            ans+=word.top();
            word.pop();
            if(!word.empty())
                ans+=' ';
        }
        return ans;
}
