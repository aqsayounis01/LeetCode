#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string defangIPaddr(string a) {
    vector<char> v;
    string s2="";
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='.')
            {
                v.push_back('[');
                v.push_back('.');
                v.push_back(']');
            }
            else
            v.push_back(a[i]);
            
        }
         for(int i=0;i<v.size();i++)
            {
                s2+=v[i];
            }
            return s2;

    }
};