#ifndef __SUBLIB_H
#define __SUBLIB_H

#ifdef  __cplusplus//条件编译去报函数以C的方式编译
extern "C" {
#endif //  __cplusplus
	int sub(int a, int b);
#ifdef  __cplusplus
}
#endif //  __cplusplus
#endif