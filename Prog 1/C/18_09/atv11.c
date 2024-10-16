#include <stdio.h>

int main()
{
	int num = 0;

	do {
		if (num % 2 == 0) {
			printf("%i\n", num);
		}
		num++;
	} while (num <= 100);
	
	while (num <= 100) {
		if (num % 2 == 0) {
			printf("%i\n", num);
		}
		num++;
	}
	
	for (num; num <= 100; num++) {
        if (num % 2 == 0) {
			printf("%i\n", num);
		}
    }

	return 0;
}