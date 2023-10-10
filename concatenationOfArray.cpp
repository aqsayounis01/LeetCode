#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> v;
    for (int  i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    


    //actual logic 
        int n1=v.size();

        for(int i=v.size(), j=0;i<n1*2;i++,j++)
        {
            v.push_back(v[j]);
        }
       
    //    for (int  i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    
    
}