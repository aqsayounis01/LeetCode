#include<iostream>
using namespace std;
#include<string>

class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        for(int i=s.length()-1;i>=0;i--)
        {   
            if(s[i]==' ' && c>0)
            {
                break;
            }

            
            if(s[i]==' ')
            {
                continue;
            }
            else
            {
                cout<<s[i];
                c++;
            }

            
        }
        return c;

       

    }
};