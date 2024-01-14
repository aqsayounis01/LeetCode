#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int k=0;k<i;k++)
                {
                    sum1+=nums[k];
           
                }

                for(int j=i+1;j<nums.size();j++)
                {
                    sum2+=nums[j];
                }
                if(sum1==sum2)
                {
                    return i;
                }
                sum1=0;
                sum2=0;
        }
        return -1;
        
    }
};