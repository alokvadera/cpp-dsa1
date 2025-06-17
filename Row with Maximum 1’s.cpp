int Solution::rowWithMaxOnes(const vector<vector<int>> &mat) {
  // Implement the function to find the row with the maximum number of 1s.
  // Return the index of the row.
  int n = mat.size();
  int m = mat[0].size();
  int maxcnt = 0;
  int maxidx = -1;
  for(int i = 0; i < n; i++) {
    auto it = lower_bound(mat[i].begin(), mat[i].end(), 1);
    int firstidx = it - mat[i].begin();
    int ones = m - firstidx;
    if (ones > maxcnt) {
      maxcnt = ones;
      maxidx = i;
    }
  }
  return maxidx;
}
