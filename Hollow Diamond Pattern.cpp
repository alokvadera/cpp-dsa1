int npart1 = n - 1;
int npart2 = n;
int npart3 = n - 1;
if (n == 1) {
cout << "" << endl;
return;
}
for (int row = 1; row <= npart1; row++) {
for (int col = 1; col <= n - row; col++) {
cout << " ";
}
if (row == 1) {
cout << "";
} else {
cout << "";
for (int col = 1; col <= 2 * row - 3; col++) {
cout << " ";
}
cout << "";
}
cout << endl;
}
cout << "";
for (int col = 1; col <= 2 * npart2 - 3; col++) {
cout << " ";
}
int totalspaces = 2 * npart2 - 3;
cout << "";
cout << endl;
// part3
for (int row = 1; row <= npart3; row++) {
for (int col = 1; col <= row; col++) {
cout << " ";
}
if (row == npart3) {
cout << "";
} else {
cout << "";
totalspaces = totalspaces - 2;
for (int col = 1; col <= totalspaces; col++) {
cout << " ";
}
cout << "*";
}
cout << endl;
}
