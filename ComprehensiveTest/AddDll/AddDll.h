#ifndef __ADDDLL_H
#define __ADDDLL_H

//   ʹ�ú������ɶ�̬��ʱ
//#ifdef ADDDLL_EXPORTS   
//#define DLL_T __declspec(dllexport)
//#else 
//#define DLL_T __declspec(dllimport)
//#endif // ADDDLL_EXPORTS   
//


#ifdef  __cplusplus//��������ȥ��������C�ķ�ʽ����
extern "C" {
#endif //  __cplusplus
	//DLL_T    ʹ�ú�ķ�ʽ������̬��ʱҪ���� int addǰ��
	 int add(int a, int b);

#ifdef  __cplusplus
}
#endif //  __cplusplus

#endif // __ADDDLL_H

