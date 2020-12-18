#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include "../AddDll/AddDll.h"
#include "../SubLib/SubLib.h"

int main(void)
{
	typedef int(*lucky)(int, int); //函数指针
	HINSTANCE hdll;    //句柄
	hdll = LoadLibrary("../Debug/AddDll.dll");
	if (NULL == hdll)
	{
		printf("无法载入动态库\n");
		FreeLibrary(hdll);
	}
	lucky add = (lucky)GetProcAddress(hdll, "add");
	if (NULL == add)
	{
		printf("无法获取函数地址\n");
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
