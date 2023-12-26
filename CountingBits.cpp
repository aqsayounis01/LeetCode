#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++)            // no we are considering 
        {
            int c=0;
            for(int j=i;j>0;)       // finding the binary equivalent of that number 
            {
                int r,d;
               r=j%2;
               if(r==1)
               {
                   c++;
               }
               d=j/2;
               j=d;
            }

                v.push_back(c);
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
    Solution s;
    int n;
    cin>>n;
    s.countBits(n);
}