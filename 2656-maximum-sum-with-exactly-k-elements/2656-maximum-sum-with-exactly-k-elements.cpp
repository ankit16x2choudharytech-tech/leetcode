class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int max_score = 0;
        int maxvalue=INT_MIN;
        int count  = 0;
        int res =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxvalue){
                maxvalue=nums[i];
                res = i;
            }
             
        }
        for(int i=0;i<k;i++){
        if(count<k){
                max_score +=nums[res];
                int temp = nums[res];
                nums.erase(nums.begin()+res);
                nums[res]= temp+1;
                count++;
            }
        }
        return max_score;
    }
};