class Solution {
public:
vector shiftRight(const vector &arr) {
vector arr2 = arr;
int n = arr2.size();
int k = arr2[n - 1];
for (int i = n - 1; i >= 0; i--) {
if (i != 0) {
arr2[i] = arr2[i - 1];
} else {
arr2[0] = k;
}
}
return arr2;
}
};
