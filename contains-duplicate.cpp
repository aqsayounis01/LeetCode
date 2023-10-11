#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& v) {
        
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]==v[i+1])
            {
                return true ;
            }
        }
        return false ;
    }
};
int main()
{
    vector <int > v ;
    int n;
    cin>>n;
    for (int  i = 0; i <n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a) ;   
     }
     Solution s;
     s.containsDuplicate(v);
    
}