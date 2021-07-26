class Solution {
public:
    int findComplement(int num) {
        
       list<int> demolist;
        
        while(num){
            demolist.push_front(num%2);
            num=num/2;
            
        }
        
        
    for (auto itr = demolist.begin(); itr != demolist.end(); itr++){
        
        if(*itr == 1)
            *itr = 0;
        
        else 
           *itr = 1;
        
    }
        
        int temp = demolist.size()-1;
        int sol = 0;
        
        
          for (auto itr = demolist.begin(); itr != demolist.end(); itr++){
              int s = *itr;
            sol = sol+(pow(2,temp))* s;
            temp--;

        }
       
        return sol;
    }
};
