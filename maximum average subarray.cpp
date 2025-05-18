class Solution {
public:
    double slidingwindow(vector<int> nums, int k) {
        int i = 0, j = k - 1;
        int sum = 0;
        int maxsum = sum;
        for (int y = i; y <= j; ++y) {
            sum += nums[y];
            maxsum = sum;
        }
        j++;
        while (j < nums.size()) {
            sum -= nums[i++];
            sum += nums[j++];
            maxsum = max(maxsum, sum);
        }
        double maxavg = (double)maxsum / k;
        return maxavg;
    }
    double findMaxAverage(vector<int>& nums, int k) {
        return slidingwindow(nums, k);
    }
};
