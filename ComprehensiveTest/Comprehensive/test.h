#ifndef __TEST_H
#define __TEST_H

#ifdef  __cplusplus//条件编译去报函数以C的方式编译
extern "C" {
#endif //  __cplusplus
	int mul(int a, int b);

#ifdef  __cplusplus
}
#endif //  __cplusplus


#endif
