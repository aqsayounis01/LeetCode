#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int c=1;
        int prev=0;
        sort(arr.begin(),arr.end());
        //122
        vector<int> v;
        for(int i=0;i<arr.size();i++)
        {
            if(i+1 < arr.size() && arr[i]==arr[i+1])
            {
                c++;
            }
            if(     i+1<arr.size() && arr[i]!=arr[i+1])
            {
                v.push_back(c);
                c=1;
            }
            if(i==arr.size()-1)
            {
                v.push_back(c);
            }

            
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(i+1<v.size() && v[i]==v[i+1])
            {
                return false;
            }
        }
        return true ;
    }
};