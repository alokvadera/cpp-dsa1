#include
#include
class Solution {
public:
vector printExtremeElementsAlternately(vector &arr) {
sort(arr.begin(), arr.end());
vector brr;
int n = arr.size();
int l = 0;
int r = n - 1;
bool amIPickingSmallElement = true;
while (l <= r) {
if (amIPickingSmallElement) {
brr.push_back(arr[l++]);
amIPickingSmallElement = false;
} else {
brr.push_back(arr[r--]);
amIPickingSmallElement = true;
}
}
return brr;
}
};
