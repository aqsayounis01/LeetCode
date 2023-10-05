#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int> v, int target) {
        int t=0;
        vector<int> v2;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(i!=j)
                {
                    t=v[i]+v[j];
                    if(t==target)
                    {
                        
                        v2.push_back(i);
                        v2.push_back(j);
                        // cout<<i<<j<<endl;
                        goto last;
                       
                    }
                }
            }
        }
        last:
         return v2;
    }
};

int main()
{
    Solution s;
    int n;
    cin>>n;
    int a;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int target;
    cin>>target;
    
    s.twoSum(v,target);

}/