#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        
        return nums[nums.size()-t];
    }
};
int main()
{

}