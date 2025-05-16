class Solution {
public:
std::pair<int, int> countZerosAndOnes(const std::vector& nums) {
int totalones=0;
int totalzeroes=0;
int size=nums.size();
for(int i=0;i<size;i++){
if(nums[i]==0){
totalzeroes++;
}
if(nums[i]==1){
totalones++;
}
}
return {totalzeroes,totalones};
}
};
