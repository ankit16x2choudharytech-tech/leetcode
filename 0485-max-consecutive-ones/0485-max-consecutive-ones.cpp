class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int Max=0;
        int count =1;
         
        if(n==1 && nums[n-1]==1)return count ;
       for(int i=1;i<n;i++){
        
        if(nums[i]==nums[i-1] && nums[i]==1){
            count++;
        }
        else if (nums[i]==nums[i-1] && nums[i]==0){
            count =0;
        }
        else  {
            count =1;
            
        }
         
        Max = max(Max , count );
        
        
        
       }
       return Max;
        
    }
};