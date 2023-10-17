#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>&v) {
        for (int  i = 0; i < v.size(); i++)
    {
        for (int  j = i+1; j < v.size(); j++)
        {
            //12
            if(v[i]==v[j])
            {
                v.erase(v.begin()+j);
                j--;
            }
        }
        
    }
   int count =v.size();
   return count;
    }
};
int main()
{
    int n;
    cin>>n;
    vector <int> nums;
    for (int  i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        nums.push_back(a);
    }
Solution s;
s.removeDuplicates(nums);
   
    
    
}