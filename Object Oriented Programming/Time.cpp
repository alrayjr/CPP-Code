#include <iostream>

int main()
{
	long long seconds;
	int minutes = seconds / 60;
	std::cout << "Enter the amount of minutes: ";
	std::cin >> minutes;

	int hours = minutes / 60;
	int day = hours / 24;
	int year = day /365;
	int remainingMinutes = minutes % 60;
	int remainingSeconds = seconds % 60;
	int remainingHours = hours % 60;
	int remainingDays = day % 24;
	int remainingYears = year % 365;

	std::cout << seconds << " seconds is " << remainingYears << "years and " << remainingDays << "days and " << remainingHours << "hours and " << remainingMinutes << "minutes and " << remainingSeconds << " seconds " << std::endl;
	return 0;
}

