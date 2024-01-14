#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int fib(int n) {
        int num=0;
        if(n==0)
        {
            return 0;
        }
        vector<int> v;
        v.push_back(1);
        v.push_back(1);

        for(int i=2;i<30;i++)
        {
            num=v[i-1]+v[i-2];
            v.push_back(num);
        }
        return v[n-1];
        
    }
};