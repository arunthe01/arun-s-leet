class Solution {
public:


bool canConstruct(string ransomNote, string magazine) {
unordered_map<char , int > u;
   
    for(char c : magazine){
        
        if(u.find(c) == u.end())
            u[c] = 1;
        
        else {
            int count = u[c] ;
            u[c] = count+1;
            
        }
    }
    
    for(char c : ransomNote){
        
        int count = u[c];
        
        if(u.find(c) == u.end() || count ==0 )
            return false;
        
        else 
            u[c] =  count - 1;
        
        
    
    }
    
    return true;
    
    
}
    
    

};
