class Solution {
public:
int Reverse(int num){
    int  power  = 0;
    while(num>0){
        power *=10;
        power += (num%10);
        num /=10;
    }
    return power ; 
}
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_set <int> set;
         for(int i =0;i<n;i++){
            int rev  = Reverse(nums[i]);
            set.insert(nums[i]);
            set.insert(rev);

         }
         return set.size();
    }
};