#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
vector<int> main()
{

    vector<int>v;
    int n;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    
// 123    -  4
// 1234
sort(v.begin(),v.end());
    // for (int  i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;


    for (int i = 0; i < v.size()-1; i++)
    {
        if(v[i]==v[i+1])
        {
            v.erase(v.begin()+i);
            i--;
        }
    }

//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }

//  cout<<endl; 


//134   - 256
//123456
vector<int>a1;
    for(int i=0,j=1;j<=n;i++,j++)
    {
        if (v[i]==j)
        {
           
            continue;
        }
    // cout<<j<<" ";
            a1.push_back(j);
            i--;
            
        
    }



    for (int  i = 0; i <a1.size(); i++)
    {
        cout<<a1[i]<<" ";
    }
    
  return a1;
}