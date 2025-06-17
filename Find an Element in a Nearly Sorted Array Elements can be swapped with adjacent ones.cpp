int findElementInNearlySortedArray(const vector<int> &arr, int k) {
  // Implement the logic here
  int n = arr.size();
  int s = 0;
  int e = n - 1;
  while (s <= e) {
    int mid = (s + e) / 2;
    if (arr[mid] ==k) {
      return mid;
    }
    if (arr[mid + 1] == k) {
      return mid + 1;
    }
    if (arr[mid - 1] == k) {
      return mid - 1;
    }
    if (k > mid) {
      s = mid + 1;
    } else {
      e = mid - 1;
    }
  }
  return -1; // Placeholder return
}
