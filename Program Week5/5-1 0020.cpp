#include <stdio.h>
int main()
{
	int a[5][4];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			scanf_s("%d", &a[i][j]);
		}
	}
	int x1, x2, x3, x4, x5;
	x1 = a[0][0] + a[0][1] + a[0][2] + a[0][3];
	x2 = a[1][0] + a[1][1] + a[1][2] + a[1][3];
	x3 = a[2][0] + a[2][1] + a[2][2] + a[2][3];
	x4 = a[3][0] + a[3][1] + a[3][2] + a[3][3];
	x5 = a[4][0] + a[4][1] + a[4][2] + a[4][3];
	if (x1 > x2 && x1 > x3 && x1 > x4 && x1 > x5) printf("1 %d", x1);
	if (x2 > x1 && x2 > x3 && x2 > x4 && x2 > x5) printf("2 %d", x2);
	if (x3 > x1 && x3 > x2 && x3 > x4 && x3 > x5) printf("3 %d", x3);
	if (x4 > x1 && x4 > x2 && x4 > x3 && x4 > x5) printf("4 %d", x4);
	if (x5 > x1 && x5 > x2 && x5 > x3 && x5 > x4) printf("5 %d", x5);
}
