#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int tsum=0;
        int n=nums.size();
       

       //edge case1
        if(nums.size()==1)
        {
            if(nums[0]<abs(target))
            {
                return 0 ;
            }
            return  1;
        }

        for(int i=0;i<nums.size();i++)
        {
            tsum+=nums[i];
        }

        //edge case2
        if(tsum<abs(target))
        {
            return 0;
        }

        int val=(tsum+target)/2;

        //edge case3
        if((tsum+target)%2!=0)
        {
            return 0;
        }
        
        int t[nums.size()+1][val+1];
        for(int i=0;i<nums.size()+1;i++)
        {
            for(int j=0;j<val+1;j++)
            {
                if(i==0)
                {
                    t[i][j]=0;
                }
                if(j==0)
                {
                    t[i][j]=1;
                }

            }
        }

        t[0][0]=1;

        for(int i=1;i<n+1;i++)
    {
        for(int j=0;j<val+1;j++)
        {
            if(nums[i-1]<=j)
            {
                t[i][j]= t[i-1][j-nums[i-1]] + t[i-1][j];
            }
            else
            {
                t[i][j]=t[i-1][j];
            }
        }
    }

    // cout<<t[n][val];
   
            return t[n][val];

    }
};