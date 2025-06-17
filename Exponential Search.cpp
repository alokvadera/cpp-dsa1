class Solution {
public:
  int bs(vector<int> &nums, int s, int e, int target) {
    while (s <= e) {
      int mid = s + (e - s) / 2;
      if (nums[mid] == target) {
        return mid;
      } else if (nums[mid] < target) {
        s = mid + 1;
      } else {
        e = mid - 1;
      }
    }
    return -1;
  }
  int exponentialSearch(vector<int> &nums, int target) {
    // Placeholder logic for exponential search
    if (nums[0] == target)
      return 0;
    int n = nums.size();
    int i = 1;
    while (i < n && nums[i] <= target) {
      i = i * 2;
    }
    return bs(nums, i / 2, min(i, (n - 1)), target);
  }
};
