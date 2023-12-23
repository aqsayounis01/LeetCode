
#include<string>
#include<iostream>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        char c ;
       int d=0;
            for(int i=0;i<s.length() ;i++)//a
            {
                for(int j=0;j<t.length() ;j++)//aa
                {
                    if(s[i]==t[j])
                    {
                        t[j]='0';
                        d=2;
                        break;
                    }
                    
                }
                
            }
            for (int  i = 0; i < t.length(); i++)
            {
                if(t[i]!='0')
                {
                    c=t[i];
                }
            }
            
        
            cout<<c;
            return c;
        
    }
};
int main()
{
    string s,t;
    cin>>s>>t;
    Solution d;
    d.findTheDifference(s,t);
}