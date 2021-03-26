#include <stdio.h>

int fatorial(int n) {
	if(n == 1) {
		printf("fatorial(%d) = %d\n", n, n);
		return 1;
	} else {
		printf("fatorial(%d) = %d * fatorial(%d)\n", n, n, n-1);
		return fatorial(n - 1) * n;
	}
}

int main(int argc, char* argv[]) {

	printf("4! = %d\n", fatorial(4));
	printf("5! = %d\n", fatorial(5));
	printf("6! = %d\n", fatorial(6));

	return 0;
}
