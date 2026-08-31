class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int idx = n;

        if(target <= nums[0]) {
            return 0;
        }

        for(int i = 1; i < n; i++) {

            if(target == nums[i]) {
                return i;
            }

            if(target > nums[i-1] && target < nums[i]) {
                return i;
            }
        }

        return n;
    }
};