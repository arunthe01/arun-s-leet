class Solution {
public:
    
    int search(vector<int>& vec, float diff,int k ){
            for( int i = 0; i < vec.size(); i++){
                if(i != k){
                    if(vec[i]==diff){
                        return i;
                        break;
                    }
                }
            }
        return -1;
        }
    
    
    vector<int> twoSum(vector<int>& vec, int target) {
        int k;
        vector<int> ve;
        for( int i = 0; i < vec.size(); i++){
            
            float diff = target-vec[i];
            int found = search(vec, diff,i);
            if(found != -1){
                    ve.push_back(i);
                    ve.push_back(found);
                    return ve;
                
                
            }
        
        }
        return ve;
    }
};
