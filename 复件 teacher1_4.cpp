//他人答案(本身有问题)，借以参考,本人不会
//假设我们班有50名同学，每个同学都报出自己的生日,每个同学的生日都不相重的概率只
//1 有0.096，如果有100个同学，不相重的概率为0.0725×10-7 。相重复的概率如此之大
//与我们主观想象不同。写一个程序，输入同学的人数n计算出其生日不重复的概率。
//然后在用仿真的方法, 利用随机数产生每个同学的生日，计算出生日不重复的
//概率并与前面的结果进行比较。   [学生的生日可以用随机数产生，rand()产生—之
//间的伪随机数，因为此需要一个种子，种子不同产生的随机数列不同，
// rand()产生的随机数也不同，可以调用srand(ltime(0))函数设置种子，]
  #include "iostream" 
  #include "cstdlib" 
  #include "ctime" 
  using namespace std; 
  int  main() {   
  	double p=1.0;
    int n,i,j,k,flg1=0,flg=0;  
     cout<<"请输入学生人数:\n";
     cin>>n; 
     for(i=1;i<=n;i++)
         p=p*(366-i)/365.0;
     cout<<n<<"个学生生日不重复的概率为："<<p<<"\n";
     const int count=30000;
     int *Bir=new int[n];
     srand((long int)time(NULL));  
     for(j=1;j<=count;j++)  
     {    
     	for(i=0;i<n;i++)     //Bir[i]= int(365.0/32767.0*rand());    
     		Bir[i]=rand()%365+1;   
     	for(i=0;i<n;i++)   
     	{ 

   			for(k=i+1;k<=n;k++) 
      		{      
      			if(Bir[i]==Bir[k])     
      				flg1++;   
      		 }    
       		if(flg1>0)    
       		{      flg++;     break;   
       		}   
       	}  
     }  
      p=(double)flg/count;  
      cout<<"模拟结果:\n";
      cout<<"仿真模拟"<<count<<"次"<<"生日有重复的次数为:"<<flg<<"\n";
      cout<<"不重复的概率为："<<1-p<<"\n"; 
      delete []Bir;
     return 0;
    }