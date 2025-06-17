#include <limits.h>
int solve(long long int dividend, long long int divisor) {
  long long int s = 0;
  long long int e = dividend;
  long long int ans = -1;
  while (s <= e) {
    long long int mid = s + ((e - s) >> 1);
    long long int product = mid * divisor;
    if (product == dividend) {
      return mid;
    } else if (product > dividend) {
      e = mid - 1;
    } else { 
      s = mid + 1;
      ans = mid;
    }
  }
  return ans;
}
long long int findQuotient(int dividend, int divisor) {
  // The user will implement this method
  if (divisor == 0) {
    return INT_MAX;
  }
  long long int ans = solve(abs((long long int)dividend), abs((long long int)divisor));
  if (divisor > 0 && dividend > 0 || dividend < 0 && divisor<0) {
    return abs(ans);
  } else {
    ans = 0 - ans;
    return ans;
  }
}
