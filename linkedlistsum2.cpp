 struct ListNode {
      int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
 


 


class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       int carry=0;
        ListNode * it =new ListNode(0);
        ListNode * res = it;
        ListNode *p = l1 , *q=l2;
        
         while(p !=nullptr || q !=nullptr ){
             int x= (p != nullptr) ? p->val:0;
             int y=(q != nullptr) ? q->val:0;

             int sum=carry+x+y;
             
             carry=sum/10;
             
             res->next= new ListNode(sum%10);
             res=res->next;
             
             
             if(p!=nullptr) p=p->next;
             
             if(q!=nullptr) q=q->next;
             
         }
         
         if(carry>0) res->next= new ListNode(carry);
        
          return it->next;    
        }
            
};
