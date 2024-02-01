#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double  myPow( double x, int  n ) {

        
        if(n==-1)
        {
            return 1/x;
        }
        if(n==1)
        {
            return x;
        }
        if(n==0)
        {
            return 1;
        }
        if(n%2==0)  // n is even
        {
            return myPow(x*x,n/2);
        }
        else if(n%2!=0)  //simple method for odd n
        {
            return x*myPow(x,n-1);
        }
        return -1;
    }
};
int main()
{
    // cout<<2.1*2.1<<endl;
    Solution s;
     double  x=2;
    int  n=-3;
    cout<<s.myPow(x,n);
    
}