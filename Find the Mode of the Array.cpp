class Solution {
public:
int findMode(const vector &arr) {
vector v = arr;
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
};
