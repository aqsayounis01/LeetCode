#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> v;
        
        for(int i=0;i<n;i++)
        {
            v.push_back(vector<int>());
        }
       
        v[0].push_back(1);
        
         if(n==1)
        {
            v[0][0]=1;
            return v;
        }
        
        v[1].push_back(1);
        v[1].push_back(1);

        
        // cout<<"outside"<<endl;
        

        for(int i=2;i<n;i++)  // no of vectors (n)

        {
            // cout<<"inside i"<<endl;
            int sum=0;
            
            v[i].push_back(1);
            
           for(int j=0;j<v[i-1].size()-1;j++)   //fill the elements inside each vector 
           {            
                sum=v[i-1][j] + v[i-1][j+1];
                // cout<<sum<<" ";
                v[i].push_back(sum);  
           }
            sum=0;
           v[i].push_back(1);

        }
            
int ev=0;
            for(int i=0;i<n;i++)
            {
                ev++;
                for(int j=0;j<ev;j++)
                {
                    cout<<v[i][j]<<" ";
                }
                cout<<endl;
            }
return v;
          
    }
};
int main ()
{
    Solution s;
    // cout<<"hi";
    int n;
    cin>>n;
    
    s.generate(n);
}