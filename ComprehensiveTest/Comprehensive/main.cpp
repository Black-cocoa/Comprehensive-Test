#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include "../AddDll/AddDll.h"
#include "../SubLib/SubLib.h"

int main(void)
{
	typedef int(*lucky)(int, int); //����ָ��
	HINSTANCE hdll;    //���
	hdll = LoadLibrary("../Debug/AddDll.dll");
	if (NULL == hdll)
	{
		printf("�޷����붯̬��\n");
		FreeLibrary(hdll);
	}
	lucky add = (lucky)GetProcAddress(hdll, "add");
	if (NULL == add)
	{
		printf("�޷���ȡ������ַ\n");
		FreeLibrary(hdll);
	}
	int a, b;
	int *p = NULL;
	p = &a;
	scanf("%d %d", &a, &b);
	while (a < 20)
	{
		a++;
		b = a*a;
	}
	printf("%d\n", add(a, b));
	printf("%d\n", sub(a, b));

	system("pause");
	return 0;	


} 
