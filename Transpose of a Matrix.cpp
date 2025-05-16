#include
#include
class Matrix {
public:
vector<vector> transpose(vector<vector> &matrix) {
int roworiginal = matrix.size();
int colorignial = matrix[0].size();
int rowtranspose = colorignial;
int coltranspose = roworiginal;
vector<vector> transpose(rowtranspose, vector(coltranspose));
for (int i = 0; i < rowtranspose; i++) {
for (int j = 0; j < coltranspose; j++) {
swap(transpose[i][j], matrix[j][i]);
}
}
return transpose;
}
};
