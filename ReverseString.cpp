#include<iostream>
#include<stack>
#include<vector>
using namespace std;


class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> s1;
        for(int i=0;i<s.size();i++)
        {
            s1.push(s[i]);
            
        }
        s.clear();
        for(int i=0;i<s1.size();)
        {
            s.push_back(s1.top());
            s1.pop();
        }
    }
};