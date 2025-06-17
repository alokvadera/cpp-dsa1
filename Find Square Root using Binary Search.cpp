class Solution {
public:
  int mySqrt(int x) {
    int target = x;
    int s = 0;
    int e = target;
    long long int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e) {
      long long int product = mid * mid;
      if (product == target) {
        return mid;
      }
      if (product > target) {
        e = mid - 1;
      }
      if (product < target) {
        s = mid + 1;
        ans = mid;
      }
      mid = s + (e - s) / 2;
    }
    return ans;
  }
};
