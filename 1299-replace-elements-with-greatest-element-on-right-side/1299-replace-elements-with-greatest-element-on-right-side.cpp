class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int max = -1;
        for(int i = n-1 ; i>=0;i--){
          if (i==n-1){
            int temp = arr[i];
            arr[i]=max;
            max = temp;
          }else if(arr[i]>max){
            int temp = arr[i];
            arr[i]=max;
            max = temp;
            }
        else
        {
                arr[i]=max;
            }

          
        }
    
        return arr;
         
    }
};