#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable:4996)

int main()
{
	FILE* fptr1, * fptr2;
	fptr1 = fopen("welcome.txt", "r");
	fptr2 = fopen("output.txt", "w");
	if ((fptr1 != NULL) && (fptr2 != NULL))
	{
		char ch;
		while ((ch = getc(fptr1)) != EOF)
			putc(ch, fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("�ɮ׽ƻs���\!!\n");
	}
	else
		printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
	return 0;
}