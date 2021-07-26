class Solution {
public:
    int firstUniqChar(string s) {
        
        unordered_map<char,int> u ;
        
        for(char c : s ){
            
            if(u.find(c) == u.end())
                u[c]=1;
            else
                u[c]=u[c]+1;
            

        }
        
        int i =0;
        int siz = s.size()-1;
        int res;
        
        for(char c : s){
            
            if(u[c]==1){
            
                res = i;
                goto l1;
            }
                
            
            
            else if(i==siz){
               res = -1;
            goto l1;
            }
            
            i++;
        }
        
        l1: return res;
        
    }
};
