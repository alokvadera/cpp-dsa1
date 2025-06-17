class Solution {
public:
  bool ispossible(vector<int> &trees, int m, int mid) {
    long long woodcollected = 0;
    for (int tree : trees) {
      if (tree > mid) {
        woodcollected += tree - mid;
      }
    }
    return woodcollected >= m;
  }
  int maxSawHeight(vector<int> &trees, int m) {
    // Placeholder logic for EKO problem
    int start = 0;
    int end = *max_element(trees.begin(), trees.end());
    int ans = -1;
    while (start <= end) {
      int mid = start + (end - start) / 2;
      if (ispossible(trees, m, mid)) {
        ans = mid;
        start = mid + 1;
      } else {
        end = mid - 1;
      }
    }
    return ans;
  }
};
