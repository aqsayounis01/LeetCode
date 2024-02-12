#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<int> nextPermutation(vector<int> v)
    {
        int n=v.size();
        int rp=-1;
        //find the right peak of the array
        for(int i=1;i<v.size();i++)
        {
            if(v[i]>v[i-1])
            {
                rp=i;
            }
        }
        // cout<<rp;
        // check if the array is in descending order
        if(rp==-1)
        {
            cout<<"array was in descending order "<<endl;
            int i=0;
            int j=n-1;
            while(i<n/2)
            {
                swap(v[i],v[j]);
                i++;
                j--;
            }
            for (int  i = 0; i < v.size(); i++)
            {
                cout<<v[i]<<" ";
            }
            
            return v;
        }

        // check if there is any number on the right of right modt peak, that lies between rp and immediate left number 
        int b=0;
        for(int i=n-1;i>rp;i--)
        {
            if(v[i]<v[rp]  && v[i]>v[rp-1])
            {
                b=1;
                cout<<"found a middle element"<<endl;
                swap(v[i],v[rp-1]);
                break;
            }
        }
        if(b==1)
        {
            sort(v.begin()+rp,v.end());
        for (int  i = 0; i < v.size(); i++)
            {
                cout<<v[i]<<" ";
            }
            return v;
        }
        



cout<<"no special case"<<endl;
    //if that was not the case
    swap(v[rp],v[rp-1]);
        // arrange the elements after rp number in ascending order

        sort(v.begin()+rp,v.end());

        for (int  i = 0; i < v.size(); i++)
            {
                cout<<v[i]<<" ";
            }
        return v;
    }
};
int main()
{
    vector<int> v={4,5,4,3,2,1};
    Solution s;
    s.nextPermutation(v);
}