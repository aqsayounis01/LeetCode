#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()

{
    int n;
    cin>>n;
    vector<int >v;
    for (int  i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        
    }
    
    sort(v.begin(),v.end());
   
    int k=0;
    int j=0;
    int m;
    for (int  i= 0; i<v.size();i+=2 )
    {

         j=i+1;
         if (i==v.size()-1)
         {
            m=v[i];
            break;
         }
         
        if (v[i]==v[j])
        {
            continue ;

        }
        else

        {
            m=v[i];
            break;
        }
        
    }
    cout<<m<<endl;
    
    

   
    
    
    

    return 0;
}