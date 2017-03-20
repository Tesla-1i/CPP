#include <iostream>
using namespace std;
 

class Date
{
private:
	int year, month, day;
public:
	//Date();
	//~Date();
	int setDate(int y, int m, int d);
	void getDate();
	void judgeDate();
};

int Date::setDate(int y, int m, int d){
	if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
		switch(m){
			case 2:
				if(d > 29)
				return 0;
				else{
					year = y; month = m; day = d;
					return 1;
				}
				break;
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				if(d <= 31){
					year = y; month = m; day = d;
					return 1;
				}
				else
					return 0;
				break;
			case 4: case 6: case 9: case 11:
				if(d <= 30){
					year = y; month = m; day = d;
					return 1;
				}
				else{
					return 0;
				}
				break;
		}

	}
	else{
		switch(m){
			case 2:
				if(d > 28)
				return 0;
				else{
					year = y; month = m; day = d;
					return 1;
				}
				break;
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				if(d <= 31){
					year = y; month = m; day = d;
					return 1;
				}
				else
					return 0;
				break;
			case 4: case 6: case 9: case 11:
				if(d <= 30){
					year = y; month = m; day = d;
					return 1;
				}
				else{
					return 0;
				}
				break;
		}		//break;
	}
}

void Date::getDate(){
	cout<<month<<"/"<<day<<"/"<<year<<"\n";
	//cout<<year<<" 年 "<<month<<" 月 "<<day<<" 日\n";
}

void Date::judgeDate(){
	int sum;
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
		switch(month){
			case 1:
			sum = day; break;
			case 2:
			sum = 31 + day; break;
			case 3:
			sum = 31 + 29 + day; break;
			case 4:
			sum = 31 * 2 + 29 + day; break;
			case 5:
			sum = 31 * 2 + 29 + 30 + day; break;
			case 6: 
			sum = 31 * 3+ 29 + 30 + day; break;
			case 7:
			sum = 31 * 3 + 30 * 2 + 29 + day; break;
			case 8:
			sum = 31 * 4 + 30 * 2 + 29 + day; break;
			case 9:
			sum = 31 * 5 + 30 * 2 + 29 + day; break;
			case 10:
			sum = 31 * 5 + 30 * 3 + 29 + day; break;
			case 11: 
			sum = 31 * 6 + 30 * 3 + 29 + day; break;
			case 12:
			sum = 31 * 6 + 30 * 4 + 29 + day; break;
		}
	}
	else{
		switch(month){
			case 1:
			sum = day; break;
			case 2:
			sum = 31 + day; break;
			case 3:
			sum = 31 + 29 + day; break;
			case 4:
			sum = 31 * 2 + 29 + day; break;
			case 5:
			sum = 31 * 2 + 29 + 30 + day; break;
			case 6: 
			sum = 31 * 3+ 29 + 30 + day; break;
			case 7:
			sum = 31 * 3 + 30 * 2 + 29 + day; break;
			case 8:
			sum = 31 * 4 + 30 * 2 + 29 + day; break;
			case 9:
			sum = 31 * 5 + 30 * 2 + 29 + day; break;
			case 10:
			sum = 31 * 5 + 30 * 3 + 29 + day; break;
			case 11: 
			sum = 31 * 6 + 30 * 3 + 29 + day; break;
			case 12:
			sum = 31 * 6 + 30 * 4 + 29 + day; break;
		}
	}
	cout<<"第"<<sum<<"天\n";
	
}


int main(){
	cout<<"请输入年 月 日\n";
	int y, m, d;
	cin>>y>>m>>d;
	Date date;
	int flag = date.setDate(y, m, d);
	if(flag == 0){
		cout<<"日期错误\n";
		return 1;
	}
	else{
		date.getDate();
		date.judgeDate();
		return 0;
	}
}
