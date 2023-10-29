#include<iostream>
#include<vector>
using namespace std ;


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count =0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                count++;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        for(int i=0;i<count;i++)
        {
            nums.push_back(0);
        }
    }
};

int main()
{
    // take size and array as input 
}