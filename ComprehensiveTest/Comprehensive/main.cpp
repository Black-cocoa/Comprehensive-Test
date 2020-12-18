#include <stdio.h>
#include <stdlib.h>
#include "../AddDll/AddDll.h"
#include "../SubLib/SubLib.h"

int main(void)
{
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
