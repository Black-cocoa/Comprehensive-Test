#include "../Comprehensive/test.h"
#include "windows.h"
#include <cstring>
#include <stdio.h>
#define CONFIG_INI "F:\\VS\\综合测试\\ComprehensiveTest\\UnitTest1\\test.ini"

struct message_t   //文件中所有节点的共有信息
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
int analyze(char* sectionaddr, int *paraandresult);//分析字符串返回相关参数和结果
												   

