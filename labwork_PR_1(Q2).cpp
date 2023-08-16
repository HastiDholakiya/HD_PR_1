#include<iostream>
using namespace std;

class Time{
	public: 
	 
	int hours;
	int minutes;
	int seconds;
	
};

int main()
{
	Time h,m,s;
	
	cout << "Enter 1st Hours : ";
	cin >> h.hours;
	cout << "Enter 1st Minutes : ";
	cin >> h.minutes;
	cout << "Enter 1st Seconds : ";
	cin >> h.seconds;
	cout << "Enter 2nd Hours : ";
	cin >> m.hours;
	cout << "Enter 2nd Minutes : ";
	cin >> m.minutes;
	cout << "Enter 2nd Seconds : ";
	cin >> m.seconds;
	
	s.seconds = h.seconds + m.seconds;
	s.minutes = h.minutes + m.minutes + (s.seconds/60);
	 
	s.hours = h.hours + m.hours + (s.minutes/60);
	s.minutes %= 60;
	s.seconds %= 60;
	
	
	cout << "Display total time :- " << s.hours << ":" << s.minutes << ":" << s.seconds ;
	
	return 0;
	
}
