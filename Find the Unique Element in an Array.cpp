class Solution {
public:
int findUniqueElement(vector &nums) {
int n = nums.size();
int ans = 0;
for (int i = 0; i < n; i++) {
ans = ans ^ (nums[i]);
}
return ans;
}
};
