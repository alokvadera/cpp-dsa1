class Solution {
public:
pair<int, int> sumPositiveNegative(const vector &arr) {
vector brr = arr;
int n = brr.size();
int positive = 0;
int negative = 0;
for (int i = 0; i < n; i++) {
if (arr[i] > 0) {
positive = positive + arr[i];
} else {
negative = negative + arr[i];
}
}
return {positive, negative};
}
};
