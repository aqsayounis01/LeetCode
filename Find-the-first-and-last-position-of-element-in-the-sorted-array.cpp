#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>v, int t) {
        vector<int>v2;
        
   
int c=0;
int temp=0;
for (int  i = 0; i <v.size(); i++)
{
    if (v[i]==t)
    {
        v2.push_back(i);
        temp=i;
        c++;
        break;
    }
    
}
if(c==0)
{
    v2.push_back(-1);
    v2.push_back(-1);
    return v2;
}
int c2=0;
for (int  i = 0; i <v.size(); i++)
{
   if(v[i]>t)
   {
    v2.push_back(i-1);
    c2++;
    break;
   }
}
if(c2==0)
{
    if(v.size()==1)
    v2.push_back(temp);
else
    v2.push_back(v.size()-1);
}


return v2;
    }
};


int main()
{
    Solution s ;
    int n;
    cin>>n;
    vector<int>v;
    for (int  i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int t;
    cin>>t;
    for (int  i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    s.searchRange(v,t);
    
}