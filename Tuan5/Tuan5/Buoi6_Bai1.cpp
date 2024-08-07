#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void ThapHaNoi(int n,char x,char y, char z) {
	if (n > 0) {
		ThapHaNoi(n - 1, x, z, y);
		printf("\n%c-> %c", x, y);
		ThapHaNoi(n - 1, z, y, x);
	}
}
int main() {
	int n;
	printf("\nNhap so dia cua thap:");
	scanf("%d", &n);
	ThapHaNoi(n, 'A', 'B', 'C');
	getch();
}