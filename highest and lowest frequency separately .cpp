#include <limits.h>
class Solution {
public:
int findMode(vector &v) {
// Implement logic to find mode
sort(v.begin(), v.end());
int maxf = 1;
int mode = v[0];
int cf = 1;
for (int i = 1; i < v.size(); i++) {
if (v[i] == v[i - 1]) {
cf++;
} else {
cf = 1;
}
if (cf > maxf) {
maxf = cf;
mode = v[i];
}
}
return mode;
}
int findleast(vector &v) {
int minfreq = INT_MAX;
int least = v[0];
int cf = 1;
for (int i = 1; i < v.size(); i++) {
if (v[i] == v[i - 1]) {
cf++;
} else {
if (cf < minfreq) {
minfreq = cf;
least = v[i - 1];
}
cf = 1;
}
}
if (cf < minfreq) {
minfreq = cf;
least = v[v.size() - 1];
}
return least;
}
pair<int, int> highestAndLowestFrequency(vector &arr) {
// Implement logic to find elements with highest and lowest frequency
int hf = findMode(arr);
int lf = findleast(arr);
return {hf, lf}; // Placeholder return; user will complete the logic
}
};
