#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	for (a = 1; a <= 5; a++) {
		for (b = 1; b <= 5; b++) {
			for (c = 1; c <= 5; c++) {
				for (d = 1; d <= 5; d++) {
					for (e = 1; e <= 5; e++) {
						if ((2 == b && 3 != a) || (2 != b && 3 == a) == 1) {
							if ((2 == b && 4 != e) || (2 != b && 4 == e) == 1) {
								if ((1 == c && 2 != d) || (1 != c && 2 == d) == 1) {
									if ((5 == c && 3 != d) || (5 != c && 3 == d) == 1) {
										if ((4 == e && 1 != a) || (4 != e && 1 == a) == 1) {
											if (((a != b) && (a != c) && (a != d) && (a != e))
												&& ((b != c) && (b != d) && (b != e))
												&& ((c != d) && (c != e))
												&& ((d != e))) {
												printf("a= %d, b= %d,c= %d,d= %d,e= %d\n", a, b, c, d, e);
											}

										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
	system("pause");
}

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	printf("0代表不是凶手；1代表是凶手\n");
	for (a = 0; a<2; a++) {
		for (b = 0; b<2; b++)	{
			for (c = 0; c<2; c++) {
				for (d = 0; d<2; d++) {
					if (((a == 0) && (c == 1) && (d == 0) == 1) 
						+ ((a == 0) && (d == 1) && (d == 0) == 1) 
						+ ((a == 0) && (c == 1) && (d == 1) == 1) 
						+ ((a == 0) && (d == 1) && (d == 0) == 1)) {
						if (a + b + c + d == 1) {
							printf("a=%d b=%d c=%d d=%d\n", a, b, c, d);
						}
					}
				}
			}
		}
	}
	return 0;
	system("pause");
}

int main() {
	int i, j;
	int n = 0;
	printf("请输入需要打印的行数:");
	scanf("%d", &n);
	int a[50][50];
	for (i = 0; i <= n; ++i) {
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i <= n; ++i) {
		for (j = 1; j <= i-1; ++j) {
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	for (i = 0; i <= n; ++i) {
		for (j = 0; j <= i; ++j) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}