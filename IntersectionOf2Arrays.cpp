#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


class Solution {
public:
    vector<int> intersect(vector<int>& v1, vector<int>& v2) {
    int d=0;
        vector<int> v3;
        int c=0;
        bool b=false;   //if v1 is greater 
            if (v2.size()>v1.size())
            {
                c=1 ;  // v2 is greater 
            }
            else if(v2.size()<v1.size())
            {
                c=2;
            }
            else if (v1.size()==v2.size())
            {
                c=3;
            }

            if(c==2) //v1 is greater 
            {
                for(int i=0;i<v2.size();i++)  //11
                {
                    for(int j=0;j<v1.size();j++)//312
                    {
                        if(v2[i]==v1[j])
                        {
                            int a= v2[i];
                            v3.push_back(a);
                           v1.erase(v1.begin()+j);
                           j--;
                            break;
                        }
                    }
                }
            }
            else if(c==1)
            {
                for(int i=0;i<v1.size();i++)//495
                {
                    for(int j=0;j<v2.size();j++)//94984
                    {
                        if(v1[i]==v2[j])
                        {
                            int a= v2[j];
                            v3.push_back(a);
                            v2.erase(v2.begin()+j);
                            j--;
                            cout<<"h12"<<" ";
                            break;
                        }
                       
                    }
                }
            }
            else if(c==3)
            {
                for(int i=0;i<v1.size();i++)//21
                {
                    for(int j=0;j<v2.size();j++)//12
                {
                    if(v1[i]==v2[j])
                    {
                        int a=v2[j];
                        v3.push_back(a);
                        v2.erase(v2.begin()+j);
                        j--;
                        break;
                    }
                }
                }
            }
           
            
           for (int  i = 0; i < v3.size(); i++)
           {
                cout<<v3[i]<<" ";
           }
           return v3 ;
           
    }
};



