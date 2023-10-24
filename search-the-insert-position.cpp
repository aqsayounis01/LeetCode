#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <int> v;
    int k,n;
    cin>>k;
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    
    for (int  i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
n=v.size();
if(k>v[n-1])
{
    return n;
}
bool f=false;
//134  //2
//1234   //6
int s=0,e=v.size(),mid=(s+e)/2;
while (s<=e)
{
    mid=(s+e)/2;
    if (v[mid]==k)
    {
        f=true;

        cout<<mid<<endl;
        return mid;
    }
    else if (v[mid]>k)
    {
        e=mid-1;
    }
    else if (v[mid]<k)
    {
        s=mid +1;
    }
    
    
    
}
//1245     //3

    
if (f==false)
{
    cout<<s<<endl;
    return s;
}



return 0;


}