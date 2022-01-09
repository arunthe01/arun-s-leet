
 struct ListNode {
      int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
 


 


class Solution {
public:
    string rev(string s){
        string r ="";
        for(int i=s.length()-1 ; i>=0; i--){
            r=r+s[i];
        }
        return r;
    }
    
    long long int sttoi(string str)
    {
        stringstream geek(str);
 
    // The object has the value 12345 and stream
    // it to the integer x
    long long int x = 0;
    geek >> x;
 
     return x;
    }
    
    long long int convert(ListNode* temp){
        string s = "";
        while(temp != nullptr){
              
           long long  int t = temp->val;
            s=s+to_string(t);
            temp=temp->next;
            
        }
        
        
         string res = rev(s);
         return sttoi(res);
        
    }
    
    void insert(ListNode* temp,int data){
        if(temp==nullptr ){
            temp->val=data;
            return;
        }
        
        while(temp->next != nullptr){
            temp=temp->next;
        }
        
         temp->next= new ListNode(data);
        
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        long int data1=convert(l1);
        long int data2=convert(l2);
        // cout<<data1<<"\n"<<data2;
        
         int sum =data1+data2;
        // cout<<sum;
        
        string fs=to_string(sum);
         ListNode* l3 = new ListNode();
        
        for(int i=fs.length()-1 ; i>=0; i--){
            
            char a = fs[i];
            long long int ia = a - '0';
            
            
            insert(l3,ia);
            
            
        }
        
        l3=l3->next;
        
        return l3;
        
    }
    
    
};



