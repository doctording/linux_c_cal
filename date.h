/* c语言头文件：cExample.h */
#ifndef C_DATE_H
#define C_DATE_H

#include <stdio.h>

#ifdef __cplusplus 
extern "C" {
#endif

	int is_leap_year(int year);

	int days_of_year(int year);

	int days_of_year_month(int year, int month);

	int week_of_year_month_day(int year, int month, int day);

	void print_cal_year_month(int year, int month);
	
	void print_cal_three_month(int monthdays1, int monthdays2, int monthdays3, int firstWeek, int index);

	void print_cal_year(int year);

	int check_valid_year(char* year);

	int check_valid_month(char* month);

#ifdef __cplusplus 
}
#endif

#endif
