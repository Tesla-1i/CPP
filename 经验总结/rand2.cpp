#include <time.h>
#include <stdlib.h>
#include <stdio.h>
//�����ĸ�Ĳ���
int main()
{
 int i,n;
 printf("Ҫ���ּ��������ĸ��");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  putchar(rand()%2?65+rand()%26:97+rand()%26);
 }
 putchar('\n');
 return 0;
}