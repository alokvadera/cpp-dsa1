class Solution {
public:
  int singleNonDuplicate(vector<int> &nums) {
    // Implement function with binary search logic
    int n = nums.size();
    int s = 0;
    int e = n - 1;
    while (s <= e) {
      if (s == e) {
        return nums[s];
      }
      int mid = (s + e) / 2;
      int currentvalue = nums[mid];
      int leftvalue = -1;
      if (mid - 1 >= 0) {
        leftvalue = nums[mid - 1];
      }
      int rightvalue = -1;
      if (mid + 1 < n) {
        rightvalue = nums[mid + 1];
      }
      if (currentvalue != leftvalue && currentvalue != rightvalue) {
        return currentvalue;
      }
      if (currentvalue == leftvalue && currentvalue != rightvalue) {
        int pairstartingindex = mid - 1;
        if (pairstartingindex & 1) {
          e = mid - 1;
        } else {
          s = mid + 1;
        }
      }
      if (currentvalue != leftvalue && currentvalue == rightvalue) {
        int pairstartingindex = mid;
        if (pairstartingindex & 1) {
          e = mid - 1;
        } else {
          s = mid + 1;
        }
      }
    }
  }
};
