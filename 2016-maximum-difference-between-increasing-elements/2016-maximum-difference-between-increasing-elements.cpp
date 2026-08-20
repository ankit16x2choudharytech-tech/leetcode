class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int result = -1;
        int minvalue = nums[0];
        
            for (int j =  1; j < n; j++) {
                if (nums[j] > minvalue) {
                    result = max(result, nums[j] - minvalue);
                    minvalue = min(nums[j],minvalue);
                }
                else {
                    minvalue = nums[j];
                }
            }
        

        return result;
    }
};