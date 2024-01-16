#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        s+=' ';
        stack<char> s1;string s2="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            s1.push(s[i]);

            else
            {
                
                
                while(!s1.empty())
        {
            
            s2+=s1.top();
            s1.pop();
        }
        if(i!=s.length()-1)
        s2+=' ';
            }

            
        
        }
        
        return s2;
    }
};