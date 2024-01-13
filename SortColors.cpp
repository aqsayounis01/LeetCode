#include<iostream>
using namespace std;
#include<string>
#include<vector>
                  
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int o=0,t=0,z=0;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                z++;
            }
            else if(nums[i]==1)
            {
                o++;
            }
            else if(nums[i]==2)
            {
                t++;
            }
            if(i==nums.size()-1)
            {
                nums.clear();
            }
        }
cout<<z<<o<<t<<endl;

        for(int i=0;i<z;i++)
        {
            nums.push_back(0);
        }
        for(int i=0;i<o;i++)
        {
            nums.push_back(1);
        }
        for(int i=0;i<t;i++)
        {
            nums.push_back(2);
        }
        return ;
    }
};