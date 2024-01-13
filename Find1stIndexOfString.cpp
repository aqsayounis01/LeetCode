#include<iostream>
using namespace std;
#include<string>
                    

                    

                    
class Solution {
public:
    int strStr(string h, string n) {
     
     int sz=n.length();
     int szc=0;
        // 0 1 2 3 4 5 6 7 8 9 10
    //   h=m i s s i s s i p p i
    //   n=i s s i p
    if(n.length()>h.length())
    {
        return -1;
    }
   int ans=0;
        for(int i=0,j=0;i<h.length();i++)
        {
            if(j<n.length() && h[i]==n[j])
            {
                szc++;
                j++;

                
                if(szc==sz)
                {
                    ans=i-(szc);
                    // cout<<sz<<szc<<endl;
                    return ans;
                }
                continue ;
            }
            else
            {
                if(szc>0)
                {
                    i=i-(szc);
                    // cout<<i;
                    break;
                }
                
                szc=0;
                j=0;
                

            }

        }
        return -1;
    }
};


int main()
{
    string s1,s2;
    cin>>s1;  //big
    cin>>s2;  //small
    Solution s;
    s.strStr(s1,s2);
}