//Binary Search and proper explanation:
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        int l= 0, r = m * n - 1;
        
        while (l <= r) {
            int mid = l + (r- l) / 2;
            int val = matrix[mid / n][mid % n];  
            
            if (val == target) return true;
            else if (val < target) l= mid + 1;
            else r = mid - 1;
        }
        return false;
    }
};
//Linear Search:
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       for(int i=0;i<matrix.size();i++)
       {
        for(int j=0;j<matrix[i].size();j++)
        {
            if(matrix[i][j]==target) return true;

        }
       } return false;
    }
};
