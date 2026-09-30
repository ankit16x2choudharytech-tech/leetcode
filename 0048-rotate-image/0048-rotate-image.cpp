class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0 ;i<m;i++){
            for(int j =i+1;j<n;j++){
                int temp = matrix[i][j];
                matrix[i][j]= matrix[j][i];
                matrix[j][i]= temp;
            }
        }

        for(int k =0;k<m;k++){
            int  i  = 0 ;
            int j = n-1;
            while(i<j){
                swap(matrix[k][i],matrix[k][j]);
                j--;
                i++;
            }
        }
    }
};