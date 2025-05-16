#include
class Solution {
public:
vector sortArray(vector &nums) {
vector arr = nums;
int left = 0;
int right = arr.size() - 1;
while (left < right) {
if (arr[left] == 0) {
left++;
} else if (arr[right] == 1) {
right--;
} else {
// arr[left] == 1 and arr[right] == 0
swap(arr[left], arr[right]);
left++;
right--;
}
}
return arr;
}
};
