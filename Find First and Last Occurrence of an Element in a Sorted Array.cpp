class Solution {
public:
  int firstOccurence(vector<int> &nums, int target) {
    int n = nums.size();
    int e = n - 1;
    int s = 0;
    int ans = -1;
    while (s <= e) {
      int mid = s + (e - s) / 2;
      if (nums[mid] == target) {
        ans = mid;
        e = mid - 1;
      } else if (target < nums[mid]) {
        e = mid - 1;
      } else {
        s = mid + 1;
      }
    }
    return ans;
  }
  int lastOccurence(vector<int> &nums, int target) {
    int n = nums.size();
    int e = n - 1;
    int s = 0;
    int ans = -1;
    while (s <= e) {
      int mid = s + (e - s) / 2;
      if (nums[mid] == target) {
        ans = mid;
        s = mid + 1;
      } else if (target < nums[mid]) {
        e = mid - 1;
      } else {
        s = mid + 1;
      }
    }
    return ans;
  }
  vector<int> searchRange(vector<int> &nums, int target) {
    int first = firstOccurence(nums, target);
    int last = lastOccurence(nums, target);
    vector<int> temp;
    temp.push_back(first);
    temp.push_back(last);
    return temp;
  }
};
