#include <time.h>
#include <stdlib.h>
#include <stdio.h>
//随机字母的产生
int main()
{
 int i,n;
 printf("要出现几个随机字母？");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  putchar(rand()%2?65+rand()%26:97+rand()%26);
 }
 putchar('\n');
 return 0;
}