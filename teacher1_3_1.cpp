//2011/11/29 by MatrixA
//��дC++���ĳ��򣬽����Ǯ���⣬��Ԫ����Ҷһ��ɣ����ֵ�Ӳ�ң��ж����ֻ���
 
//#include "stdafx.h"
#include <iostream>
#include <iomanip>
 
using namespace std;
 
int CaculateTheNumber(int number)         //����㷨��Ϊ����ֱ��������
{
     int counter=0;         //������
     int timeNum;       //����i�б仯��ֵ
     for(int i=number; i>0; i--)
     {
         timeNum = i;
         while(timeNum > 0)       //���ճ������С���...n�����������ж��ٸ�
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
     return counter+1;      //��߼��ϵ�ԭ��ȫ�����ǵ�ʱ�������ҲҪ���ȥ
}
 
int main()
{
     int money,_number;
     cout<<setw(28)<<"��XԪ����Ҷһ��ɣ����ֵ�Ӳ�ҳ���"<<"\n";
     cout<<"��������Ҫ�ֽ��Ǯ���Ĵ�С��Ԫ����";
     cin>>money;
     money=100*money;
     _number=CaculateTheNumber(money);
     cout<<"�������Ǯ�����Ա��ֽ��"<<_number<<" ����....\n";
    
     //system("pause");
     return 0;
}
