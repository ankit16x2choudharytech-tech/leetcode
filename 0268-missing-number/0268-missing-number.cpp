class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int low = 0;
        int high = nums.size();
        while(low < high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] == mid) {
                low = mid + 1;
            }
            else {
                high = mid;
            }
        }

        return low;
    }
};