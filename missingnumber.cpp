#include
#include
class Solution {
public:
int missingNumber(vector &nums) {
sort(nums.begin(), nums.end());
int n = nums.size();
for (int i = 0; i < n; i++) {
if (nums[i] != i) {
return i;
}
}
if (nums[0] != 0) {
return 0;
}
if (nums[n] != nums[n - 1] + 1) {
return nums[n - 1] + 1;
}
}
};
