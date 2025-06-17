class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    // Implement the solution here
    // row=mid/columns;
    // col=mid%colums;

    int rows = matrix.size();
    int cols = matrix[0].size();
    int total = rows * cols;
    int s = 0;
    int e = total - 1;

    while (s <= e) {
      int mid = s + (e - s) / 2;
      int rowindex = mid / cols;
      int colindex = mid % cols;

      if (matrix[rowindex][colindex] == target) {
        return true;
      } else if (target > matrix[rowindex][colindex]) {
        s = mid + 1;
      } else {
        e = mid - 1;
      }
    }
    return false;
  }
};
