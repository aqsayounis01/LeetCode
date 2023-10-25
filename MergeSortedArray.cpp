#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>v3;
        for(int i=0;i<m;i++)
        {
            v3.push_back(nums1[i]);
            
        }
        for(int i=0;i<n;i++)
        {
            v3.push_back(nums2[i]);
            
        }
nums1.clear();
for(int i=0;i<v3.size();i++)
{
    nums1.push_back(v3[i]);
}
        sort(nums1.begin(),nums1.end());
        
        for (int  i = 0; i < nums1.size(); i++)
        {
            cout<<nums1[i]<<" ";
        }
        
    }
};

int main()
{
    Solution s;
    vector<int> num1,num2;
    int m,n;
    cin>>m>>n;
    for (int  i = 0; i < m; i++)
    {
        int a;
        cin>>a;
        num1.push_back(a);
    }
    for (int  i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        num2.push_back(a);
    }
    s.merge(num1,m,num2,n);
}