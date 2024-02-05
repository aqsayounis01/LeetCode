//bruteforce
// class Solution {
// public:
//     int firstUniqChar(string s) {
        
      
//         int b=0;
//         for(int i=0;i<s.size();i++)
//         {
//             b=0;
//             for(int j=0; j<s.size();j++)
//             {
                
//                 if(i!=j && s[i]==s[j])
//                 {
//                    b=1;
//                 }
//                 else if(j==s.size()-1 && b==0)
//                 {
//                     return i;
//                 }
                
                
                
//             }
            
//         }
//         return -1;
//     }
// };

//optimal-> frequency array

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        
    vector<int> f(26);
    

    for(int i=0;i<s.size();i++)
    {
        f[s[i]-'a']++;
    }
    for(int i=0;i<s.size();i++)
    {
        cout<<f[s[i]-'a']<<endl;
        if(f[s[i]-'a']==1)
        {
            return i;
        }
    }
    return -1;
    }
};
int main()
{
    string s="leetcode";
    Solution so;
    cout<<so.firstUniqChar(s);

}