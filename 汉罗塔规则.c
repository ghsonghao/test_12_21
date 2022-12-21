#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	void hannoi(int n, char a, char b, char c);
	int m;
	printf("请输入总数：");
	scanf("%d", &m);
	printf("移动步骤为：%d\n");
	hanoi(m, 'A', 'B', 'C');
	return 0;
}

void hanoi(int n, char a, char b, char c)
{
	void move(char a, char c);
	if (n == 1)
		move(a, c);
	else
	{
		hanoi(n - 1, a, c, b);
		move(a, c);
		hanoi(n - 1, b, a, c);
	}
}

void move(char x, char y)
{
	printf("从%c移到%c\n", x, y);
}
