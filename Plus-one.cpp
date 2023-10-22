#include<iostream>
#include<vector>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>v) {
        
        //9-10   9129  9899 - 
        vector <int>v2;
        bool f= false; int k=0;
        int s=v.size();
        for (int  i = v.size()-1; i >=0; i--)
        {
            
            int l=v[v.size()-1]+1;
            if (v[i]!=9)
            {
                v.erase(v.begin()+(i));
                v.push_back(l);
                break;
            }
            else
            {
                f=true;
               
                if (v[i]==9)
                {
                    v.erase(v.begin()+i);
                    k++;
                   
                }

                
            }
            
        }
        
if (f==true)
{
    
    if (k==s)
    {
        v.push_back(1);
    }
    for (int  i = 0; i < k; i++)
    {
        v.push_back(0);
    }
    
}



        for (int  i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        return v;
    }
};
int main()
{
    vector <int >v;
    int n;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    Solution s ;
    s.plusOne(v);
    
}