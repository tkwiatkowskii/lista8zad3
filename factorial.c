#include <stdio.h>
int factorial (int n, int acc) {
	if (n == 0) return acc;
	return factorial(n - 1, acc * n);
}
int main() {
	printf("%d", factorial(5, 1));
	return 0;
}
	
	