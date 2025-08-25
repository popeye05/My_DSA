class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
     {
      int  n= matrix.size(); //As this is a square matrix, so row=column
        for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){ //j=i becuase elements above the diagonal once xwapped,then why again do it . otherwise again if you swap, you'll get  the same result
            swap(matrix[i][j],matrix[j][i]);
        }}
        for(int i=0;i<n;i++) reverse(matrix[i].begin(),matrix[i].end());
    }
};
