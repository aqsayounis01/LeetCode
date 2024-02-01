#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.size();i++)
        {
            if('a'<=s[i]&& s[i]<='z' || s[i]>='A'&& s[i]<='Z' || s[i]>='0'&& s[i]<='9')
            {
                cout<<s[i]<<" ";
                continue ;
            }
            else
            {
                s.erase(s.begin()+i);
                i--;
            }
        }
transform(s.begin(),s.end(),s.begin(),::tolower);
        cout<<s<<endl;


//check it is palindrome or not 

    for(int i=0,j=s.size()-1;i<s.size(),j>0;i++,j--)
    {
        if(s[i]!=s[j])
        {
            cout<<"false";
            return false;
        }
        if(i==j)
        {
            cout<<"true";
            return true;
        }
        
    }
    cout<<"true";
    return true ;



    }
};
int main()
{
    string s;
    getline(cin,s);
    Solution so;
    so.isPalindrome(s);
}