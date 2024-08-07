#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void KTDX(char a[]) {
	int a_len = strlen(a);
	for (int i = 0; i < a_len; i++)
	{
		if (a[i] != a[a_len -i-1]) {
			printf("Chuoi khong doi xung");
			return;
		}
	}
	printf("Chuoi doi xung");
}
int main() {
	char a[100] = "ABCCBA";
	printf("\nChuoi da cho:%s\n", a);
	KTDX(a);
	getch();
}