#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void ChuyenDoiChuoi(char a[]) {
	int a_len = strlen(a);
	for (int i = 0; i < a_len; i++)
	{
		if (i == 0 || (i>0 && a[i - 1] == 32)) {
			if (a[i] >= 97 && a[i] <= 122) a[i] -= 32;
		}
		else {
			if (a[i] >= 65 && a[i] <= 90) a[i] += 32;
		}
	}
}
int main() {
	char a[100] = "le tAN phU";
	printf("\nChuoi ban dau:%s\n",a);
	ChuyenDoiChuoi(a);
	printf("Chuoi da doi:%s", a);
	getch();
}