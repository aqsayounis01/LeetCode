#include<iostream>
#include<string>
#include<math.h>
using namespace std;
#include<string>
class Solution {
public:
    bool isPalindrome(long  x) {
        long d=0;
        long r=0;
        string sum="";
long t=x;
if(t<0)
        {
           return false;
        }
        else if(x==0)
        {
            return 1;
        }
        else{
        for(int i=x;t>0;i--)
        {
            d=t/10;
            r=t%10;
            sum+=to_string(r);
            t=d;
        }
        }
        if(stol(sum)==x)
        {
            return true ;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Solution s;
    long n;
    cin>>n;
    s.isPalindrome(n);
    
    
}