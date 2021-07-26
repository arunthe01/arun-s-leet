class Solution {
public:
    int firstBadVersion(int n) {
    
      long int start=1 , end =n , result = n , mid;
        
     
        
      while(start<end){
          
          
            mid = (start+end)/2;
          
          if( isBadVersion(mid)){
              
             end = mid;
              
         }
          
         else       
            start = mid+1;
          
          
          
   }
        
        if(start == end ){
            
            result = start;
      }
        
         
     return result;
        
    }
    
};
