#ifndef __ADDDLL_H
#define __ADDDLL_H

//   使用宏来生成动态库时
//#ifdef ADDDLL_EXPORTS   
//#define DLL_T __declspec(dllexport)
//#else 
//#define DLL_T __declspec(dllimport)
//#endif // ADDDLL_EXPORTS   
//


#ifdef  __cplusplus//条件编译去报函数以C的方式编译
extern "C" {
#endif //  __cplusplus
	//DLL_T    使用宏的方式导出动态库时要加在 int add前面
	 int add(int a, int b);

#ifdef  __cplusplus
}
#endif //  __cplusplus

#endif // __ADDDLL_H

