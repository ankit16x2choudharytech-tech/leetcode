class Solution {
public:

    void ispair(vector<int>& nums,vector<vector<int>>& ans,int si,int target,int first) {
        int i = si;
        int j = nums.size() - 1;
        while(i < j) {
            int sum = nums[i] + nums[j];
            if(sum == target) {
                ans.push_back({first, nums[i], nums[j]});
                while(i < j && nums[i] == nums[i + 1])
                    i++;
                while(i < j && nums[j] == nums[j - 1])
                    j--;

                i++;
                j--;
            }
            else if(sum < target) {
                i++;
            }
            else {
                j--;
            }
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 2; i++) {
            if(i >0 && nums[i] == nums[i - 1])
                continue;
            ispair(nums, ans, i + 1,-nums[i],nums[i]);
        }

        return ans;
    }
};