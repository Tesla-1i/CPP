//2011/11/29 by MatrixA
//编写C++风格的程序，解决百钱问题，将元人民币兑换成，，分的硬币，有多少种换法
 
//#include "stdafx.h"
#include <iostream>
#include <iomanip>
 
using namespace std;
 
int CaculateTheNumber(int number)         //这个算法以为对象分别进行讨论
{
     int counter=0;         //计数器
     int timeNum;       //现在i中变化的值
     for(int i=number; i>0; i--)
     {
         timeNum = i;
         while(timeNum > 0)       //按照程序中有、、...n个讨论其中有多少个
         {
              if(timeNum % 5==0)
              {
                   counter++;
                   timeNum -= 2;
              }
              else
              {
                   timeNum -= 2;
                   if(timeNum == 0) 
                      counter++;
              }
         }
     }
     return counter+1;      //这边加上的原因当全部都是的时候的那种也要算进去
}
 
int main()
{
     int money,_number;
     cout<<setw(28)<<"将X元人民币兑换成，，分的硬币程序"<<"\n";
     cout<<"请输入您要分解的钱数的大小（元）：";
     cin>>money;
     money=100*money;
     _number=CaculateTheNumber(money);
     cout<<"请输入的钱数可以被分解成"<<_number<<" 种数....\n";
    
     //system("pause");
     return 0;
}
