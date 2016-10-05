#include <time.h>
#include "date.h"

int main(int argc, char *argv[])
{
	printf("\033[47;30m%d!\n\033[0m",10);
	
	if (argc > 3)
	{
		printf("too many argumentsi\n");
		return 0;
	}
	else if (argc == 3)
	{
		int month = check_valid_month(argv[1]);
		int year = check_valid_year(argv[2]);
		if(month == -1)
		{
			printf("cal: %s is neither a month number (1..12) nor a name\n", argv[1]);
			return 0;
		}
		if(year == -1)
		{
			printf("cal: not a valid year %s\n",argv[2]);
			return 0;
		}
		if(year == -2)
		{
			printf(" cal: year %s not in range 1..9999\n",argv[2]);
			return 0;
		}
		
		print_cal_year_month(year, month);
	}
	else if (argc == 2){
		int year = check_valid_year(argv[1]);
		if(year == -1)
		{
			printf("cal: not a valid year %s\n",argv[1]);
			return 0;
		}
		if(year == -2)
		{
			printf(" cal: year %s not in range 1..9999\n",argv[1]);
			return 0;
		}
		print_cal_year(year);
	}
	else{
		time_t now; //实例化time_t结构 
		struct tm *timenow; //实例化tm结构指针 
		time(&now); 
		//time函数读取现在的时间(国际标准时间非北京时间)，然后传值给now 
		timenow = localtime(&now); 
		int year = timenow->tm_year + 1900;
		int month = timenow->tm_mon + 1;
		print_cal_year_month(year, month);
	}

	return 0;
}
