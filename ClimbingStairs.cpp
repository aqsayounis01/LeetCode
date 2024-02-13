//  it is a dp problem
// using recursion (TLE)
//  in tree the elements come again and again, and we have to evaluate them again,
//  to optimize this problem we use memorization of DP
class Solution {
public:
int  v[46];   //for memorization 
int recur(int n)
{
    if(n==1|| n==2)
    {
        return n;
    }
    if(v[n-1]!=-1)
    {
        return v[n];
    }
    return v[n]=recur(n-1)+ recur(n-2);
}
    int climbStairs(int n) {
       
        for(int i=0;i<46;i++)
        {
            v[i]=-1;
        }
        
        int a = recur(n);
        return a;
    }
};