#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sumx=0;
        int sumy=0;
        if(k==0)
        {
            return nums[0];
        }
        for(int i=1;i<nums.size();i++)
        {
            int t=i;
            sumx=0;
        
            while(t!=0)
            {
                t=(t&(t-1));
                sumx++;
            
            }
            // cout<<sumx<<endl;
            if(k==sumx)
            {
                sumy+=nums[i];
            }
        }
        return sumy;
    }
};