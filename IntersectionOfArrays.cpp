#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class Solution {
public:
    vector<int> intersection(vector<int>& v1, vector<int>& v2) {
        
        vector<int> v3;
        bool b=false;   //if v1 is greater 
            if (v2.size()>v1.size())
            {
                b=true ;  // v2 is greater 
            }

            if(b==false) //v1 is greater 
            {
                for(int i=0;i<v2.size();i++)
                {
                    for(int j=0;j<v1.size();j++)
                    {
                        if(v2[i]==v1[j])
                        {
                            int a= v2[i];
                            v3.push_back(a);
                            break;
                        }
                    }
                }
            }
            else
            {
                for(int i=0;i<v1.size();i++)
                {
                    for(int j=0;j<v2.size();j++)
                    {
                        if(v1[i]==v2[j])
                        {
                            int a= v2[j];
                            v3.push_back(a);
                            break;
                        }
                       
                    }
                }
            }
            if(v3.size()!=0)
            {
                sort (v3.begin(),v3.end());
                for(int i=0;i<v3.size()-1;i++)
                {
                    if(v3[i]==v3[i+1])
                        {
                            v3.erase(v3.begin()+i);
                            i--;
                        }
                }
            }
            
            return v3;
    }
};