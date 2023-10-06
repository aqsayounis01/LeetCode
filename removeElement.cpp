#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int > v;
    int n;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int val;
    int count =v.size();
    cout<<"enter the value that you want to remove :";
    cin>>val;
    for (int  i = 0; i < v.size(); i++)
    {
        if (v[i]==val)
        {
            v.erase(v.begin()+i);
            cout<<"removing "<<i<<" "<<v[i]<<endl;
            i--;
            count--;
        }
        
    }
    
    for (int  i = 0; i < v.size(); i++)
    {
        cout<<v[i];
        
    }


    return count ;
    
}