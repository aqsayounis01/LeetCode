#include<iostream>
using namespace std;
#include<vector>


class Solution {
public:
    void moveZeroes(vector<int>& v) {
      
        int c=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==0)
            {
                v.erase(v.begin()+i);
                i--;
               c++;

            }
        }
        for(int i=0;i<c;i++)
        {
            v.push_back(0);
        }
    }
};
int main()
{
    Solution s;
    vector<int>v;
    int n;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    
    s.moveZeroes(v);

}