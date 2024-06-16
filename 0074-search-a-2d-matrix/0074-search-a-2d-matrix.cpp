class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
        }
        int row = matrix.size();
        int col = matrix[0].size();
        int start = 0;
        int end = row * col - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            int mid_value = matrix[mid / col][mid % col];

            if (mid_value == target) {
                return true;
            } else if (mid_value < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;
    }
};