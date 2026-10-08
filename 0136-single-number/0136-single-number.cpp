class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int ,int > m;
        pair< int , int > p1;
        for(int i = 0;i<nums.size();i++){
             m[nums[i]]++;
        
        }
        for(auto p1:m){
            if(p1.second==1) return p1.first;
        } 
        return -1;
    }
};