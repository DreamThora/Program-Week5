#include <stdio.h>
int main()
{
	int a[2][2], b[2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			scanf_s("%d", &a[i][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			scanf_s("%d", &b[i][j]);
		}
	}
	printf("\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", a[i][j] + b[i][j]);
		}
		printf("\n");
	}

}