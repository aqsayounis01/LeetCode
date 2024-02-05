#include<bits/stdc++.h>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
 
class Solution {
public:
ListNode* rec(ListNode* head , int k,int cnt,int l,int sum,int r)
{
    cnt=k;
        
        sum+=k;
        ListNode* c=head ;
        ListNode* p=NULL;
        ListNode* n;
        ListNode* t=head ;

        while(cnt && c!=NULL)
        {
            n=c->next;
            c->next=p;

            p=c;
            c=n;
            cnt--;
          
        }
        
        
        if(l-sum>=k)    //if remaining nodes > k only then call the function again
        head->next=rec(c,k,cnt,l,sum,r);

        

        return p;
}

    ListNode* reverseKGroup(ListNode* head, int k) {
        
        int l=0;
        int cnt =0;
        int sum=0;
        ListNode* t= head ;
        while(t!=NULL)
        {
            l++;
            t=t->next;
        }
        // cout<<l<<endl;

        int r=l%k;
        ListNode* last=head;
        // cout<<r;
        if(r!=0)
        {
        int oth=l-r;    
        
        oth;
        while(oth)  //3
        {
            last=last->next;
            oth--;
        }
        }
       
        // oth (last)reaches the node that needs to be added as it is 

       ListNode* nh=rec(head,k,cnt,l,sum,r);
    
    if(r!=0)   // then add the remaining nodes 
    {
        ListNode* tempr= nh;
        while(tempr->next!=NULL)
        {
            tempr=tempr->next;
        }
        tempr->next=last;
    }
return nh;
    }
};