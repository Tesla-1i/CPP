
//随机数产生
//#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
 // 初始化随机数种子
 // time函数返回从1970年1月1日零时零分零秒到目前为止所经过的时间，单位为秒
 srand((int)time(NULL));
 int j;
 for (int i = 0; i < 10; i++) {
  j = (rand() * 100) / RAND_MAX + 1; // 生成1~100之间的随机数
  printf("j = %d \n", j);
 }
 return 0;
}
