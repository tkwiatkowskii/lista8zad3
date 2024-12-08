#include <stdio.h>
#include <limits.h>
int factorial (int n, int acc) {
        if (acc > INT_MAX / n) return -1; //sprawdza int overflow
	if (n == 0 || n == 1) return acc;
	return factorial(n - 1, acc * n);
}
int main() {
	printf("%d", factorial(5, 1));
	return 0;
}
	
	
