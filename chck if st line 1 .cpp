class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        int xdiff = coordinates[1][0] - coordinates[0][0];
        int ydiff = coordinates[1][1] - coordinates[0][1];
        
        for(int i = 2 ; i<coordinates.size(); i++){
            
            int curry = coordinates[i][1] - coordinates[i-1][1];
            int currx = coordinates[i][0] - coordinates[i-1][0];
            
            if(ydiff*currx != xdiff*curry){
                retun false;
            }
              
        }
        
        return true;
        
    }
};
