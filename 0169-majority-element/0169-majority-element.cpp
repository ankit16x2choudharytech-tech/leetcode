class Solution {
public:
    int majorityElement(vector<int>& nums) {
        float n = nums.size(); 
        int result = 0;
        int count =1;int number;
        for(int i =1;i<nums.size();i++){
            if(nums[result] == nums[i]){
                count ++;

            }
            else {
                count --;
            }
            if(count ==0){
                result= i;
                count+=1;
            }

        }
        count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[result]==nums[i]){
                count++;
            }
            if(n/2<count)
            number = nums[result];
             
        }
        return number ;
    }
};