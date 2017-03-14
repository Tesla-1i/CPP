#include<iostream>
using namespace std; 
//定义一个时间类
class Time{
private:
	int hour;
	int minute;
	int second;
public:
	
	Time(int h, int m, int s);
	
	void setTime(int h, int m, int s);
	void setHourOfTime(int h);
	void setMintueOfTime(int m);
	void setSecondOfTime(int s);
	void tick();
	void printTime();
};


Time::Time(int h, int m, int s){
	hour = h;
	minute = m;
	second = s;
}
void Time::setHourOfTime(int h){
	hour = h;
}

void Time::setMintueOfTime(int m){
	minute = m;
}

void Time::setSecondOfTime(int s){
	second = s;
}

void Time::setTime(int h, int m, int s){
	hour = h;
	minute = m;
	second = s;
}

void Time::tick(){
	if(second != 59){
		second++;
	}
	if(second == 59){		//==不是=
		if(minute != 59){
			minute++;
			second = 0;
		}
		else{
			if(hour != 12){
				second = 0; minute = 0; hour++;
			}
			else{
				second = 0; minute = 0; hour = 1;
			}
		}
	}
	cout<<"修改后的时间\n";
	cout<<hour<<"h "<<minute<<"m "<<second<<"s \n";
}

void Time::printTime(){
	cout<<hour<<"h "<<minute<<"m "<<second<<"s\n";
}



int main(){
	int h, m, s;
	cout<<"请输入时间hour, minute, second\n";
	cin>>h>>m>>s;
	if(h<0 || h>25 || m < 0 || m > 59 || s < 0|| s > 59){
		cout<<"时间错误\n";
		return 1;
	}
	Time time(h, m, s);
	time.printTime();
	char a;
	cout<<"单独修改hour,请输入h;单独修改minute,请输入m;单独修改second,请输入s;\n";
	cout<<"修改所有请输入a;";
	cin>>a;
	switch(a){
		
		case 'h':
			cout<<"输入新的hour\n";
			int h;
			cin>>h;
			if(h<0 || h>24){
			cout<<"error\n";
			return 1;
			} 
			time.setHourOfTime(h);
			time.printTime();
			break;
		case 'm':
			cout<<"请输入新的mintue\n";
			int m;
			cin>>m;
			if(m<0 || m>59){
				cout<<"error\n";
				return 1;
			}
			time.setMintueOfTime(m);
			time.printTime();
			break;
		case 's':
			cout<<"请输入新的second\n";
			int s;
			cin>>s;
			if(s<0 || s>59){
				cout<<"error\n";
				return 1;
			}
			time.setSecondOfTime(s);
			time.printTime();
			break;
		case 'a':
			cout<<"请输入新的hour，minute，second\n";
			int h1, m1, s1;
			cin>>h1>>m1>>s1;
			if(h1<0 || h1>25 || m1 < 0 || m1 > 59 || s1 < 0|| s1 > 59){
			cout<<"时间错误\n";
			return 1;
			}
			time.setTime(h1, m1, s1);
			time.printTime();
	}
	//time.setTime(12, 23, 34);
	time.tick();
	return 0;

}
