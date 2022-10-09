

#include <stdio.h>
#include <math.h>


int main() {

	int n, i;
	printf("Welcome to Fizz Buzz!\n");
	printf("Enter an integer between 1 and 100 to see how it works:\n");
	printf(": ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++){
		if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
	}
	return 0;
}
