#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 80
#define ENTER 13
#pragma warning(disable:4996)
int main(void)
{
	FILE* fptr;
	char str[MAX], ch;
	int i = 0;
	fptr = fopen("output.txt", "a");
	printf("�п�J�r��A��Enter�����G\n");
	while ((ch = getche()) != ENTER && i < MAX)
		str[i++] = ch;
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n�ɮת��[����!!\n");
	system("pause");
	return 0;
}