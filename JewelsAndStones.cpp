#include<iostream>
#include<string>
#include<algorithm>

using namespace  std ;

class Solution {
public:
    int numJewelsInStones(string jew, string s) {
        int c=0;
        sort(s.begin(),s.end());
        for(int i=0;i<jew.length();i++)
        {
            for(int j=0;j<s.length();j++)
            {
                
                if(s[j]==jew[i])
                {
                    c++;
                   
                }
            }
        }
        return c;
    }
};