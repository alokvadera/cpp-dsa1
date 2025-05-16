int npart1 = n;
int npart2 = n + 1;
int maxspace = (2 * n) - 1;
for (int row = 1; row <= npart1; row++) {
for (int col = 1; col <= row - 1; col++) {
cout << " ";
}
cout << "";
for (int col = 1; col <= maxspace; col++) {
cout << " ";
}
maxspace = maxspace - 2;
cout << "";
cout << endl;
}
for (int row = 1; row <= npart2; row++) {
for (int col = 1; col <= npart2 - row; col++) {
cout << " ";
}
if (row == 1) {
cout << "";
} else {
cout << "";
for (int col = 1; col <= 2 * row - 3; col++) {
cout << " ";
}
cout << "*";
}
cout << endl;
}
