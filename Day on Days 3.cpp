// HomeworkTwoDaysonDays.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <sstream>
#include <string>
#include <iostream>

using namespace std;



int main()
{
	string day, month, year, count;
	cout << "What day are you starting from? (Enter a number from 1-31):" << endl; getline(cin, day); int num_day = stoi(day);
	cout << "What month are you starting from? (Enter a number from 1-12):" << endl; getline(cin, month); int num_month = stoi(month);
	cout << "What year are you starting from? (Enter a number in >= 0):" << endl; getline(cin, year); int num_year = stoi(year);
	cout << "Enter how many days you want to count:" << endl; getline(cin, count); int num_count = stoi(count);
	int terminate = 0;
	int bigdays = num_count + num_day;
	int add_to_year = bigdays / 365;
	int new_year = num_year + add_to_year;
	int counter = 0;
	bigdays = bigdays - add_to_year * 365;
	int new_month;
	do {
		if (num_month == 1 || num_month == 3 || num_month == 5 || num_month == 7 || num_month == 8 || num_month == 10 || num_month == 12) {
			if (bigdays > 31) {
				bigdays -= 31;
				counter += 1;
			}
			else { terminate = 1; }
		}
		else if (num_month == 4 || num_month == 6 || num_month == 9 || num_month == 11) {
			if (bigdays > 30) {
				bigdays -= 30;
				counter += 1;
			}
			else { terminate = 1; }
		}
		else if (num_month == 2) {
			if (new_year % 4 == 0) {
				if (bigdays > 29) {
					bigdays -= 29;
					counter += 1;
				}
				else { terminate = 1; }
			}
			else {
				if (bigdays > 28) {
					bigdays -= 28;
					counter += 1;
				}
				else { terminate = 1; }
			}
		}
	} while (terminate != 1);
		new_month = num_month + counter;
		if (new_month > 12) {
			new_month -= 12;
		}
	string OMonth, Month;
	if (month == "1") {
		OMonth = "January";
	}
	else if (month == "2") {
		OMonth = "February";
	}
	else if (month == "3") {
		OMonth = "March";
	}
	else if (month == "4") {
		OMonth = "April";
	}
	else if (month == "5") {
		OMonth = "May";
	}
	else if (month == "6") {
		OMonth = "June";
	}
	else if (month == "7") {
		OMonth = "July";
	}
	else if (month == "8") {
		OMonth = "August";
	}
	else if (month == "9") {
		OMonth = "September";
	}
	else if (month == "10") {
		OMonth = "October";
	}
	else if (month == "11") {
		OMonth = "November";
	}
	else if (month == "12") {
		OMonth = "December";
	}

	if (new_month == 1) {
		Month = "January";
	}
	else if (new_month == 2) {
		Month = "February";
	}
	else if (new_month == 3) {
		Month = "March";
	}
	else if (new_month == 4) {
		Month = "April";
	}
	else if (new_month == 5) {
		Month = "May";
	}
	else if (new_month == 6) {
		Month = "June";
	}
	else if (new_month == 7) {
		Month = "July";
	}
	else if (new_month == 8) {
		Month = "August";
	}
	else if (new_month == 9) {
		Month = "September";
	}
	else if (new_month == 10) {
		Month = "October";
	}
	else if (new_month == 11) {
		Month = "November";
	}
	else if (new_month == 12) {
		Month = "December";
	}

	cout << "The date you inputted was " << OMonth << " " << day << ", " << year << endl;
	cout << "If you add " << count << " days to this date then it will be " << Month << " " << bigdays << ", " << new_year << endl;

	return 0;
}
