class Solution {
public:

   
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        int k = n / 2;
        long long ans = 0;
        long long first = 0;
        long long total = 0;
        for(int i = 0; i < n; i++) {
            total += nums[i];
            if(i < k) {
                first += nums[i];
            }
        }
        for(int j = 0; j < n; j++) {
            long long last = total - first;
            if(first > last) {
                ans++;
            }
            first = first - nums[j];
            first = first + nums[(j + k) % n];
        }

        return ans;
    }
};