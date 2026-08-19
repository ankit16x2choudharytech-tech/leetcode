class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         
        int idx=0;
        while(idx<nums.size()-1){
            if(nums.at(idx)==nums.at(idx+1)){
                nums.erase(nums.begin()+idx);
            }else{
            idx++;}
        }
        return nums.size();
    }
};