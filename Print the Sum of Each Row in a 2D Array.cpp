vector rowSums(const vector<vector>& arr) {
// Implement the function to compute row sums
vector<vector> brr=arr;
int n=brr.size();
int m=brr[0].size();
vector ans;
for(int i=0;i<n;i++){
int sum=0;
for(int j=0;j<m;j++){
sum=sum+arr[i][j];
}
ans.push_back(sum);
}
return ans;
}
