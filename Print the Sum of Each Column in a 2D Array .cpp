std::vector columnSums(const std::vector<std::vector> &matrix) {
std::vector<std::vector> arr = matrix;
int n = arr.size();
int m = arr[0].size();
std::vector ans;
for (int i = 0; i < m; i++) {
int sum = 0;
for (int j = 0; j < n; j++) {
sum = sum + arr[j][i];
}
ans.push_back(sum);
}
return ans;
}
