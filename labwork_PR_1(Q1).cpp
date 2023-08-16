#include<iostream>
using namespace std;

class Distance{
	public:
		int feet;
		int inch;
		
};

int main()
{
	
	Distance d1,d2,d3;
	
	   cout << "Enter First Feet : ";
	   cin >> d1.feet;
	   cout << "Enter First inch : ";
	   cin >> d1.inch;
       cout << "Enter Second Feet : ";
	   cin >> d2.feet;
	   cout << "Enter Second inch : ";
	   cin >> d2.inch;
	   
	   d3.feet =  ((d1.inch+d2.inch)/(d1.feet+d2.feet)) + (d1.feet + d2.feet);
	   d3.inch = (d1.inch + d2.inch) % (d1.feet + d2.feet);
	   
	   cout << "Feet : " << d3.feet << endl;
	   cout << "inch : " << d3.inch << endl;	 

    return 0;
}
