class Solution {
public:
  int findPivotIndex(vector<int> &nums) {
    // code here
    int n = nums.size();
    int s = 0;
    int e = n - 1;
    while (s <= e) {
      int mid = (s + e) / 2;
      if (mid + 1 < n && nums[mid] > nums[mid + 1]) {
        return mid;
      } else if (nums[mid] < nums[s]) {
        e = mid - 1;
      } else {
        s = mid + 1;
      }
    }
    return -1;
  }
};
