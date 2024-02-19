#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        //this is a problem of unbounded knapsack
        int n=coins.size();
        int t[n+1][amount+1];
if(n==1 && amount%coins[0]!=0)
{
    return -1;
}
        //initialization
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<amount+1;j++)
            {
                if(i==0)  //when  empty array _. we need infinite coins (0=0.000000001)
                {
                    t[i][j]=INT_MAX-1;
                }
                if(j==0)  //sum is 0 -> min no of coins =0
                {
                    t[i][j]=0;
                }
            }
            

        }
        t[0][0]=INT_MAX-1;

        for(int i=1;i<amount+1;i++) // we need to initialize the 2nd row also in this problem
        {
            if(i%coins[0]==0)
            {
                t[1][i]=i/coins[0];
            }
            else
            {
                t[1][i]=INT_MAX-1;
            }
        }

            // rest of the matrix 
            for(int i=2;i<n+1;i++)
            {
                for(int j=1;j<amount+1;j++)
                {
                    if(j>=coins[i-1])
                    {
                        t[i][j]=min(t[i][j-coins[i-1]]+1,t[i-1][j]);   // questions in which we want the count,
                        // we use +1 to keep the track of the ount 
                    }
                    else
                    {
                        t[i][j]=t[i-1][j];
                    }
                }
            }
            if(t[n][amount]==INT_MAX-1)  //  if it is invalid
            {
                return -1;
            }
            return t[n][amount];
    }
};






