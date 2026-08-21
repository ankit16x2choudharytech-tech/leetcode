class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long long firstmax = LLONG_MIN;
        long long secondmax = LLONG_MIN;
        long long thirdmax = LLONG_MIN;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == firstmax ||
                nums[i] == secondmax ||
                nums[i] == thirdmax) {
                continue;
            }

            if (nums[i] > firstmax) {
                thirdmax = secondmax;
                secondmax = firstmax;
                firstmax = nums[i];
            }
            else if (nums[i] > secondmax) {
                thirdmax = secondmax;
                secondmax = nums[i];
            }
            else if (nums[i] > thirdmax) {
                thirdmax = nums[i];
            }
        }

        if (thirdmax == LLONG_MIN) {
            return firstmax;
        }

        return thirdmax;
    }
};