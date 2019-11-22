#include <Windows.h>
#include <stdio.h>
using namespace std;

int main() {
	int year;
	int month;
	int days=0;
	BOOL flag;

	printf("请输入年份：\n");
	scanf_s("%d", &year,4);
	printf("请输入月份：\n");
	scanf_s("%d", &month,4);
	if (year % 4 == 0 && year % 100 != 0)
		flag = 1;
	else if (year % 400 == 0)
		flag = 1;
	else 
		flag = 0;
	switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			days = 31;
			break;
		case 2:
			days = flag ? 29 : 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		default:
			printf("输入的月份非法！\n");
			break;
	}
	printf("%d年%d月的天数:%d\n",year,month,days);
	system("pause");
	return 0;
}