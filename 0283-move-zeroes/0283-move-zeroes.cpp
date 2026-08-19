class Solution {
public:
    void moveZeroes(vector<int>& nums) {
         
        int idx=0;
        if(nums.at(idx)!=0)idx++;
        for(int i=1;i<nums.size();i++){
            if(nums.at(i)!=0){
                swap(nums.at(idx),nums.at(i));
                idx++;
            }
        }
         
    }
};