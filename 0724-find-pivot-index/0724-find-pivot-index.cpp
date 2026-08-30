class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int n =nums.size();
       vector<int> ps(n);
       
       ps[0]=nums[0];
        int psl=0;
        int psr=0;
        for(int i=1;i<nums.size();i++){
            ps[i]= ps[i-1]+nums[i];
        }
        for(int i=0;i<nums.size();i++){
            if(i==0){
                psl=0;
                  
            }else{
                  psl = ps[i-1];
            }
            if(i==nums.size()-1){
                psr=0;
                 
            }
            else{
                 psr=ps[nums.size()-1]-ps[i];
                  
            }
            if(psl==psr){
                return i;
            }
            
            
                

          
            
        }
        return -1;
        
    }
};