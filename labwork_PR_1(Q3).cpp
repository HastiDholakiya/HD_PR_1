#include<iostream>
using namespace std;

class Time{
	public:
		int hours;
		int minutes;
		int seconds;
	    int total;
};

int main()
{
	Time h1;
	
	cout << "Enter total seconds : ";
	cin >> h1.total;
	
	h1.hours = h1.total/3600;
    h1.total = h1.total%3600;
	h1.minutes = h1.total/60;
	h1.total = h1.total%60;
	h1.seconds = h1.total;
	
	cout << "Display in HH:MM:SS format : "<< endl;
	cout << h1.hours << ":" << h1.minutes << ":" << h1.seconds;
	
	return 0;
}
