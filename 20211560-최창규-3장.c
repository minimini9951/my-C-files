#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	short point1 = 88;
	short point2 = 92;
	short total = point1 + point2;

	printf("\n\n");

	printf("�й� : 20221234       �̸� : ȫ�浿\n\n");

	printf("-------------------\n");
	printf("1��)\n");
	printf("%d %d", 021, 0x1b);
	printf("\n");

	printf("-------------------\n");
	printf("2��)\n");
	printf("�߰� % d �⸻ % d �� % d", point1, point2, total);
	printf("\n");

	printf("-------------------\n");
	printf("3��)\n");
	printf("%d %d %d\n", 8, 010, 0x8);
	printf("%d %d %d\n", 9, 011, 0x9);
	printf("%d %d %d\n", 10, 012, 0xa);
	printf("%d %d %d\n", 11, 013, 0xb);
	printf("%d %d %d\n", 12, 014, 0xc);
	printf("%d %d %d\n", 13, 015, 0xd);
	printf("%d %d %d\n", 14, 016, 0xe);
	printf("%d %d %d\n", 15, 017, 0xf);
	printf("\n");

	printf("-------------------\n");
	printf("4��)\n");

	printf("\n");

	//getch();

	return 0;
}