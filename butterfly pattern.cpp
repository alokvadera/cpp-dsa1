for(int i = 1; i <= n; ++i) {
for(int j = 1; j <= i; ++j) {
std::cout << "";
}
for(int j = 1; j <= 2 * (n - i); ++j) {
std::cout << " ";
}
for(int j = 1; j <= i; ++j) {
std::cout << "";
}
std::cout << std::endl;
}
for(int i = 1; i <= n; ++i) {
for(int j = 1; j <= n - i + 1; ++j) {
std::cout << "";
}
for(int j = 1; j <= 2 * (i - 1); ++j) {
std::cout << " ";
}
for(int j = 1; j <= n - i + 1; ++j) {
std::cout << "";
}
std::cout << std::endl;
}
