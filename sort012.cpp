#include <bits/stdc++.h> 
using namespace std;
#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{
   //   Write your code here
   int c[3]={0,0,0};
   for(int i=0;i<n;i++)
   {
      c[arr[i]]++;
   }
 
   for(int i=0;i<c[0];i++)
   {
      arr[i]=0;
   }
   for(int i=c[0];i<c[0]+c[1];i++)
   {
      arr[i]=1;
      
   }
   for(int i=c[1]+c[0];i<n;i++)
   {
      arr[i]=2;
      
   }
   // cout<<endl;
   // return;
}

int main()
{
    int arr[]={0,1,2,1,2,1,2};
    int n=5;
    sort012(arr,n);
}