#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int r) {
        vector<vector<int>> v;
        
        for(int i=0;i<34;i++)
        {
            v.push_back(vector<int>());
        }
       
        v[0].push_back(1);
        
        
        
        v[1].push_back(1);
        v[1].push_back(1);

        

        for(int i=2;i<34;i++)  // no of vectors (n)

        {
            
            int sum=0;
            
            v[i].push_back(1);
            
           for(int j=0;j<v[i-1].size()-1;j++)   //fill the elements inside each vector 
           {            
                sum=v[i-1][j] + v[i-1][j+1];
                v[i].push_back(sum);  
           }
            sum=0;
           v[i].push_back(1);

        }

        int ev=0;
            for(int i=0;i<34;i++)
            {
                ev++;
                for(int j=0;j<ev;j++)
                {
                    if(i==r)
                    {
                        return v[i];
                    }
                    
                }
                
            }
            return v[0];
    }
};