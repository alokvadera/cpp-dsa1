#include <algorithm>
class Solution {
public:
  bool ispossible(vector<int> &boards, int k, int n, int sol) {
    long long timesum = 0;
    int c = 1;
    for (int i = 0; i < n; i++) {
      if (boards[i] > sol) {
        return false;
      }
      if (boards[i] + timesum > sol) {
        c++;
        timesum = boards[i];
        if (c > k)
          return false;

      } else {
        timesum += boards[i];
      }
    }
    return true;
  }
  long long minTime(vector<int> &boards, int k) {
    // Placeholder logic for the Painter's Partition Problem
    long long n = boards.size();
    long long start = 0;
    long long end = 0;
    for (int i = 0; i < n; i++) {
      end += boards[i];
    }
    long long ans = -1;
    while (start <= end) {
      long long mid = start + (end - start) / 2;
      if (ispossible(boards, k, n, mid)) {
        ans = mid;
        end = mid - 1;
      } else {
        start = mid + 1;
      }
    }
    return ans;
  }
};
