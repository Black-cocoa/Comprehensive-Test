#include "../Comprehensive/test.h"
#include "windows.h"
#include <cstring>
#include <stdio.h>
#define CONFIG_INI "F:\\VS\\�ۺϲ���\\ComprehensiveTest\\UnitTest1\\test.ini"

struct message_t   //�ļ������нڵ�Ĺ�����Ϣ
{
	int max;
	int name;
};

struct parameterandresult
{
	int a;
	int b;
	int c;
	int d;
	int e;
};
message_t *get_case_space(void);
int analyze(char* sectionaddr, int *paraandresult);//�����ַ���������ز����ͽ��
												   

