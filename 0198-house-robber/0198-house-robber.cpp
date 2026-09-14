class Solution {
public:
    int rob(vector<int>& nums,int idx=0 ) { 
        int n = nums.size();
        vector<int> dp(n+2,-1);
          dp[n+1]=0;
          dp[n]=0;
        
            if(n==0)return 0;
            if(n==1)return nums[0];
            
            for(int i = n-1;i>=0;i--){
                if(dp[i]!=-1){
                    return dp[i];
                }else{
            int robb= nums[i]+dp[i+2];
            int notrob=0+dp[i+1];
            dp[i] = max(robb , notrob);}
            }
 
            
        
        return dp[0];
    }
};