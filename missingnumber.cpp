#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int missingNumber(vector<int>& v) {
        int n=v.size();
        int j=0;
        for( j=1;j<=n;j++)
        {
            bool flag =false;
            for(int i=0;i<n;i++)
            {
                if(v[i]==j)
                {
                    flag=true;
                    
               }
            }
            if(flag==false)
            {
                cout<<j<<endl;
                return j;
            }
        }
return 0;
    }
};

int main()
{
    // take vector and size as input 
}