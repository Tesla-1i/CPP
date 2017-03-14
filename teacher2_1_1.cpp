#include<iostream>
using namespace std; 
//����һ��ʱ����
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
	if(second == 59){		//==����=
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
	cout<<"�޸ĺ��ʱ��\n";
	cout<<hour<<"h "<<minute<<"m "<<second<<"s \n";
}

void Time::printTime(){
	cout<<hour<<"h "<<minute<<"m "<<second<<"s\n";
}



int main(){
	int h, m, s;
	cout<<"������ʱ��hour, minute, second\n";
	cin>>h>>m>>s;
	if(h<0 || h>25 || m < 0 || m > 59 || s < 0|| s > 59){
		cout<<"ʱ�����\n";
		return 1;
	}
	Time time(h, m, s);
	time.printTime();
	char a;
	cout<<"�����޸�hour,������h;�����޸�minute,������m;�����޸�second,������s;\n";
	cout<<"�޸�����������a;";
	cin>>a;
	switch(a){
		
		case 'h':
			cout<<"�����µ�hour\n";
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
			cout<<"�������µ�mintue\n";
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
			cout<<"�������µ�second\n";
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
			cout<<"�������µ�hour��minute��second\n";
			int h1, m1, s1;
			cin>>h1>>m1>>s1;
			if(h1<0 || h1>25 || m1 < 0 || m1 > 59 || s1 < 0|| s1 > 59){
			cout<<"ʱ�����\n";
			return 1;
			}
			time.setTime(h1, m1, s1);
			time.printTime();
	}
	//time.setTime(12, 23, 34);
	time.tick();
	return 0;

}
