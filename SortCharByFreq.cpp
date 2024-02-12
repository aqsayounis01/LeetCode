// 4 test cases did not passed 


// bool cmp(pair<char, int>& a, 
//         pair<char, int>& b) 
// { 
//     return a.second > b.second; 
// } 
// class Solution {
// public:
// vector<pair<char,int> > A;

// void sort1(map<char, int>& M) 
// { 
 
//     for(auto it: M)
//     {
//         A.push_back(it);
//     }
//     // Sort using comparator function 
//     sort(A.begin(), A.end(),cmp); 
    
    

// }
//     string frequencySort(string s) {
//         map<char,int>m;
//         if(s.length()>100000)
//         {
//             return s;
//         }
//         char a='a';
//         for(int i=0;i<26;i++)   // all the char frquency is set to 0
//         {
//             m[a]=0;
//             a++;
//         }
//         for(int i=0;i<s.size();i++)
//         {
//             m[s[i]]++;       // actual frequency
//         }
//        sort1(m);           // greater value (second) first
//        string s2;

// //forming the string 
//        for(int i =0;i<s.size();i++)
//        {
//            int b=A[i].second;
//            s2.append(b,A[i].first);
           
//        }
//         return  s2;
//     }     
// };

// all passed 
#include<bits/stdc++.h>
using namespace std;
//greatest frequency character first
class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        multimap<int,char> r;
        string ss="";

        for(auto a : s)     //freq of each char in the mp (map)
            mp[a]++;

        for(auto a : mp)     //insert the map into the multi map
            r.insert({a.second, a.first});

        for(auto it = r.rend(); it != r.rbegin(); it++)   // from reverse do iteration
            ss.append(it->first,it->second);
//it-first here means insert a char how many times 
        return ss;
    }
};


