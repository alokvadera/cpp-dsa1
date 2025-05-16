class Solution {
public:
vector addTwoNumbers(vector &nums1, vector &nums2) {
vector arr;
vector result;
int n1=nums1.size(),n2=nums2.size();
int carry=0;
for(int i=0;i<n1 || i<n2 || carry;i++){
int sum=carry;
if(i<n1) sum+=nums1[i];
if(i<n2) sum+=nums2[i];
result.push_back(sum%10);
carry =sum/10;
}
return result;
}
};
