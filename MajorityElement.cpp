#include<string>
#include<vector>
#include<algorithm>
#include <iostream>
#include<math.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>&v) {
        // 1111223
        //232232   -n=6   n/2=3
        //222233
        sort(v.begin(),v.end());

        int sz= floor(v.size()/2)  ;
        cout<<"size"<<sz<<endl;
       int d=1; 
       for(int j=0;j<v.size();j++)
       {
        
             if(  (j+1)<v.size()  && v[j]==v[j+1])
             {
                cout<<"value of j"<<j<<endl;
                d++;
             }
             else{
                // cout<<d<<" ";
                if(d>sz)
                {
                    cout<<v[j]<<endl;
                    return v[j];
                }
               d=1;
             }
       }

    }
};
int main()
{
    vector<int>n;
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int c;
        cin>>c;
        n.push_back(c);
    }

        Solution s;
        s.majorityElement(n);
}