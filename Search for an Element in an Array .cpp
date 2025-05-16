int size = nums.size();
for (int i = 0; i < size; i++) {
int value = nums[i];
if (value == target) {
return i;
}
}
