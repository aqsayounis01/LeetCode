#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxs=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            
            sum=sum+nums[i];
            maxs=max(maxs,sum);
            cout<<maxs<<" ";
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxs;
    }
};