#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
        {
            return false ;
        }
        if((n& (n-1))==false )
        {
            return true ;
        }
        return false ;
    }
};