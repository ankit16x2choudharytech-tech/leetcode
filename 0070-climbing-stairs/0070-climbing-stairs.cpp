class Solution {
public:
int climbstairs(int n){
      vector<int> dp(n+2,-1);
      dp[0]=0;
      dp[1]=1;
      dp[2]=2;
      if(dp[n] != -1)
          return dp[n];
      for(int i =3;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
      }
      return dp[n];
    
}
    int climbStairs(int n) {
       
        return climbstairs(n);
        
    }
};