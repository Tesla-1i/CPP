
//���������
//#include "stdafx.h"
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
 // ��ʼ�����������
 // time�������ش�1970��1��1����ʱ������뵽ĿǰΪֹ��������ʱ�䣬��λΪ��
 srand((int)time(NULL));
 int j;
 for (int i = 0; i < 10; i++) {
  j = (rand() * 100) / RAND_MAX + 1; // ����1~100֮��������
  printf("j = %d \n", j);
 }
 return 0;
}
