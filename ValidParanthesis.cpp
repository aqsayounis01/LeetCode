#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i=0;
        while(i<s.size())
        {
            
            if(!st.empty() && ((st.top()=='(' && s[i]==')' ) || (st.top()=='{' && s[i]=='}') || (st.top()=='[' && s[i]==']') ))
            {
                st.pop();
                
            }
            else 
            {
                st.push(s[i]);
             
            }
            i++;
        
        }

        if(st.empty())
        {
            cout<<1;
            return true;
        }
        else
        {
            cout<<st.top();
            return false;
        }
    }
};
int main()
{
    string s;
    cin>>s;
    Solution so;
    so.isValid(s);
}