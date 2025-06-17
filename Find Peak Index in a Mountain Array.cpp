int peakIndexInMountainArray(vector<int> &a) {
  int n = a.size();
  int s = 0;
  int e = n - 1;
  int ans = -1;
  while (s <= e) {
    int mid = (s + e) >> 1;
    if (a[mid] < a[mid + 1]) {
      s = mid + 1;
    } else if (a[mid] < a[mid - 1]) {
      e = mid - 1;
    } else {
      ans = mid;
      break;
    }
  }
  return ans;
}
