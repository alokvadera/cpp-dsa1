for (int row = 1; row <= n; row++) {
for (int col = 1; col <= n - row; col++) {
cout << " ";
}
for (int col = 1; col <= 2 * row - 1; col++) {
cout << "";
}
cout << endl;
}
int totalstars = 2 * n - 3;
n--;
for (int row = 1; row <= n; row++) {
for (int col = 1; col <= row; col++) {
cout << " ";
}
for (int col = 1; col <= totalstars; col++) {
cout << "";
}
totalstars = totalstars - 2;
cout << endl;
}
