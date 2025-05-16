class Solution {
public:
int pivotIndex(vector &nums) {
vector lsum(nums.size(), 0);
vector rsum(nums.size(), 0);
for (int i = 0; i < nums.size(); i++) {
lsum[i] = lsum[i - 1] + nums[i - 1];
}
for (int i = nums.size() - 2; i >= 0; i--) {
rsum[i] = rsum[i + 1] + nums[i + 1];
}
for (int i = 0; i < nums.size(); i++) {
if (lsum[i] == rsum[i]) {
return i;
}
}
return -1;
}
};
