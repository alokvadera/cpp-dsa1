/*class InfiniteArray {
private:
    vector<int> arr;
public:
    InfiniteArray(vector<int> nums) : arr(nums) {}

    int get(int index) {
        if (index >= arr.size()) return INT_MAX;
        return arr[index];
    }
};*/

class Solution {
public:
  int unboundedSearch(InfiniteArray &arr, int target) {
    // Placeholder logic for unbounded search

    int i, j = 1;
    while (arr.get(j) <= target) {
      i = j;
      j = j * 2;
    }
    int s = i;
    int e = j;
    while (s <= e) {
      int mid = s + (e - s) / 2;
      if (arr.get(mid) == target) {
        return mid;
      } else if (arr.get(mid) < target) {
        s = mid + 1;
      } else {
        e = mid - 1;
      }
    }
    return -1;
  }
};
