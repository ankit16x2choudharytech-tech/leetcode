class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int pl[n];
         pl[0]=nums[0];
        int pr[n];
         pr[n-1]=nums[n-1];
        int pls,prs,finalproduct;
        for(int i=1;i<nums.size();i++){
            pl[i]=pl[i-1]*nums[i];

        }
        for(int i=nums.size()-2;i>=0;i--){
            pr[i]=pr[i+1]*nums[i];
        }
        vector<int> product;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                pls=1;
                prs=pr[i+1];
                finalproduct = pls*prs;
                product.push_back(finalproduct);
            }
            else  if(i==nums.size()-1){
                 pls=pl[i-1];
                prs=1;
                finalproduct = pls*prs;
                product.push_back(finalproduct);
            } 
            else{
                pls=pl[i-1];
                prs=pr[i+1];
                finalproduct = pls*prs;
                product.push_back(finalproduct);
            }
            
        }
        return product;
    }
};