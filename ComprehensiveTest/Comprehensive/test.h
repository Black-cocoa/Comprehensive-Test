#ifndef __TEST_H
#define __TEST_H

#ifdef  __cplusplus//条件编译去报函数以C的方式编译
extern "C" {
#endif //  __cplusplus
	//DLL_T    使用宏的方式导出动态库时要加在 int add前面
	int mul(int a, int b);

#ifdef  __cplusplus
}
#endif //  __cplusplus


#endif
