#include<iostream>
using namespace std;
#include<vector>
class Solution {
public:
    int numIdenticalPairs(vector<int>& n) {
        int c=0;
        for(int i=0;i<n.size();i++)
        {
            for(int j=i+1;j<n.size();j++)
            {
                if(n[i]==n[j])
                {
                    c++;
                }
            }
        }
        
        return c;
        
    }
};