char ch = 'A' + n;
for (int i = 1; i <= n; i++) {
char ch = 'A' + n - i;
for (int j = 1; j <= i; j++) {
cout << ch++;
}
cout << endl;
}
