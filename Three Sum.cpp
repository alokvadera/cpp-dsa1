class Solution {
public:
vector<vector> threeSum(vector &nums) {
vector arr = nums;
int n = arr.size();
vector<vector> ans;
sort(arr.begin(), arr.end());
for (int i = 0; i < n; i++) {
if (i > 0 && arr[i] == arr[i - 1]) {
continue;
}
for (int j = i + 1; j < n; j++) {
if (j > i + 1 && arr[j] == arr[j - 1]) {
continue;
}
for (int k = j + 1; k < n; k++) {
if (k > j + 1 && arr[k] == arr[k - 1]) {
continue;
}
int first = arr[i];
int second = arr[j];
int third = arr[k];
int sum = first + second + third;
if (sum == 0) {
vector temp;
temp.push_back(first);
temp.push_back(second);
temp.push_back(third);
ans.push_back(temp);
}
}
}
}
// return
return ans;
}
};
