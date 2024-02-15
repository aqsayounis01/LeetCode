#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool canPartition(vector<int>& v) {
        int s=0;
        for(int i=0;i<v.size();i++)
        {
            s+=v[i];
        }
        if(s%2!=0)
        {
            return false ;
        }
        else
        {
            int sum=s/2;
            bool t[v.size()+1][sum+1];
            // now find a subset whose sum = sum ( same like is subset sum problem )
            for(int i=0;i<v.size()+1;i++)
            {
                // initialization or base case
                for(int j=0;j<sum+1;j++)  
                {
                    if(j==0)    
                    {
                        t[i][j]=true;
                    }
                    else if (i==0 && j!=0)
                    {
                        t[i][j]=false;
                    }
                }

            }

            // loop for recursive calls
            for(int i=1;i<v.size()+1;i++)   //weight array size
            {
                for(int j=1;j<sum+1;j++)    // weight 
                {
                    if(j<v[i-1])  //exclude
                    {
                        t[i][j]= t[i-1][j];
                    }
                    else if(j>=v[i-1])
                    {
                        t[i][j]=  t[i-1][j-v[i-1]] || t[i-1][j];
                    }
                    
                }
            }

            return t[v.size()][sum];
        }
        return false;
    }
};