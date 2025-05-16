for (int i = 1; i <= n; i++) {
if (i == 1 || i == 2 || i == n) {
for (int j = 1; j <= i; j++) {
cout << "* ";
}
} else {
cout << "* ";
for (int z = 1; z <= (i - 2); z++) {
cout << " ";
}
cout << "* ";
}
cout << endl;
}
