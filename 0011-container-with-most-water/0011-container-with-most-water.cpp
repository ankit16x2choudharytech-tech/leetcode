class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int curr  = 0;
        int  maxwater = INT_MIN;
        int left  = 0, right  = n-1;
        while (left <right){
          curr = (right-left)*min(height[right], height[left]);
          maxwater = max(maxwater, curr);
          if(height[left] < height[right]){
            left++;
          }
          else{
            right--;
          }

        }
        
return maxwater;
        
    }
};