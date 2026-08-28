class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int maxproduct = nums[0];
        int minproduct = nums[0];
        int result = nums[0];

        for(int i = 1; i < nums.size(); i++) {

            if(nums[i] < 0) {
                swap(maxproduct, minproduct);
            }

            maxproduct = max(nums[i], maxproduct * nums[i]);

            minproduct = min(nums[i], minproduct * nums[i]);

            result = max(result, maxproduct);
        }

        return result;
    }
};