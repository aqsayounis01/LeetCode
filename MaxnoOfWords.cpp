#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int c=1;
        int maxe=0;
        for(int i=0;i<s.size();i++)
        {
            c=1;
            for(int j=0;j<s[i].length();j++)
            {
                if(s[i][j]==' ')
                {
                    c++;
                }
            }
            maxe=max(maxe,c);
        }
        return maxe;
    }
};