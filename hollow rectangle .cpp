for (int i = 1; i <= n; i++) {
if (i == 1 || i == n) {
for (int j = 1; j <= m; j++) {
cout << "* ";
}
} else {
cout << "* ";
for (int z = 1; z <= (m - 2); z++) {
cout << " ";
}
cout << "* ";
}
cout << endl;
}
