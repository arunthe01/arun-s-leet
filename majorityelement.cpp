class Solution {
public:
     int majorityElement(vector<int>& nums) {
        
        unordered_map<int,int> u ;
        stack<int> s;
        
       int maximum = nums[0];
        
        s.push(maximum);
        
        for(int c : nums){
            
            if(u.find(c) == u.end()){
                u[c] = 1;
            }
            else {
                u[c] = u[c]+1;
            }
            
            if(u[c] > u[maximum]){
                maximum = c;
                s.push(maximum);
            }
                   
        }
                
            
            return s.top();
            
    }
        
    
   
};
