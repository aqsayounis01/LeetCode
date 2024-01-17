#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

class Solution {
public:
    char slowestKey(vector<int>& t, string k) {
        int diff=0;
        int maxe=t[0];
        int ind =0;
        char maxs='0';  // because it has ascii value lower than a-z
      
        for(int i=0;i<t.size();i++)
        {
            
            if(i==0)
            {
                diff=t[i];
            }
            else
            {
                diff=t[i]-t[i-1];
            }
                if(maxe==diff)
                {
                    maxs=max(k[i],k[ind]);

                   if(k[i]>k[ind])
                   {
                    ind =i;  //when it last changed 
                   }
                }
                if(maxe<diff)
                {
                    ind=i;   
                    maxe=diff;
                    maxs=k[i];
                    
                }   
        }
        cout<<maxs<<endl;
        return maxs;
    }

};
int main()
{
    string s;
    Solution o;
    vector<int> v={10,20,21,22,23,33,43,45,46,47,57,67};
    s="aeodzyabcdxk";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
    o.slowestKey(v,s);

}
