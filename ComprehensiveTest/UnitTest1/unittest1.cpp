#include "windows.h"
#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Comprehensive/test.h"
#include "config.h"
#define SECTION_LEN 50
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: �ڴ�������Դ���
			int paraandresult[3];
			char samplenode[SECTION_LEN] = { 0 };//���Խڵ���
			message_t * section = get_case_space();//�õ����������ļ��нڵ�ķ�Χ�ͽڵ���
			for (int i = 1; i < section->max + 1; ++i)
			{
				memset(&paraandresult, 0, sizeof(paraandresult));
				memset(samplenode, 0, sizeof(samplenode));
				sprintf(samplenode, "Section%d", i);
				analyze(samplenode, paraandresult);
				Assert::AreEqual(paraandresult[2], (int)GetPrivateProfileIntA(samplenode, "value", 20, CONFIG_INI));
				Assert::AreEqual(paraandresult[2], mul(paraandresult[0], paraandresult[1]));
			}
			Assert::AreEqual(2, mul(1, 2));
			free(section);
			section = NULL;
		}

	};
}