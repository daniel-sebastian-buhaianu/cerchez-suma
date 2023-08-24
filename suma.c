#include <stdio.h>

int main()
{
	unsigned s, r;

	printf("S = "); scanf("%u", &s);

	if (s < 8) {
		printf("S trebuie sa fie un numar natural mai mare (>) ca 7.\n");
		return 1;
	}

	r = s % 3;

	switch (r) {
		case 1:
			printf("S = %u * 3 + 2 * 5", s/3 - 3);
			break;

		case 2:
			printf("S = %u * 3 + 5", s/3 - 1);
			break;

		default: 
			printf("S = %u * 3", s/3);
	}

	printf("\n");

	return 0;
}
