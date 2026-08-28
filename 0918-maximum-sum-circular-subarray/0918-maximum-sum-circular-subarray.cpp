class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n  = nums.size();
        int current_Max = 0;
        int Maxsubarray = INT_MIN;
        int Minsubarray= INT_MAX;
        int current_Min = 0;
        int Result ;
        int totalmax  = 0;
        int circularmax ;
        for(int i=0;i<n;i++){
            current_Max = max(current_Max+nums[i],nums[i]);
            Maxsubarray = max(current_Max,Maxsubarray);

             current_Min = min(current_Min+nums[i],nums[i]);
            Minsubarray = min(current_Min,Minsubarray);

            totalmax +=nums[i];
        }

        circularmax  = totalmax-(Minsubarray);
        if (Maxsubarray < 0) {
    return Maxsubarray;
            }

      Result = max(circularmax,Maxsubarray);

       return Result; 
    }
};