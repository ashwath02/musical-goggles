class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int low = m - 1, high = 0;
        
        while (low >= 0 && high < n) {
            if (matrix[low][high] == target) {
                return true;
            } else if (matrix[low][high] > target) {
                low--;
            } else {
                high++;
            }
        }
        return false;
    }
};
