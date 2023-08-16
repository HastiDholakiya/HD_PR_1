#include<iostream>
using namespace std;

class House{
	public:
		char house_city[50];
		char house_area[50];
		int house_no;
		char house_name[50];
		int no_of_rooms;
		int no_of_kichen;
		int no_of_hall;
		int no_of_balcony;
		int no_of_washroom;
};

class Rooms{
	public:
		int room_no;
		int room_persons;
		char room_name[50];
		int no_of_bed;
		int no_of_sofa;
		int no_of_washroom;
		int no_of_TV;
		int no_of_windows;
		int no_of_cupboard;
		int no_of_AC;
		int no_of_fan;
		int no_of_photoframe;
		int no_of_lights;
		
};

int main()
{
	House h1;
	 
	Rooms r[5];
	    
	    int i;
	    int n;
	
	    cout << "Enter house city : ";
	    cin >> h1.house_city;
		cout << "Enter house area : ";
	    cin >> h1.house_area;
		cout << "Enter house number : ";
	    cin >> h1.house_no;
		cout << "Enter house name : ";
	    cin >> h1.house_name;
		cout << "Enter number of rooms in house : ";
	    cin >> h1.no_of_rooms;
		cout << "Enter number of kichen in house : ";
	    cin >> h1.no_of_kichen;
		cout << "Enter number of hall in house : ";
	    cin >> h1.no_of_hall;
		cout << "Enter number of balcony in house : ";
	    cin >> h1.no_of_balcony;
		cout << "Enter number of washroom in house : ";
	    cin >> h1.no_of_washroom;
	    
	    cout << endl;
	    
	    cout << "house city : " << h1.house_city << endl;
	    cout << "house area : " << h1.house_area << endl;
	    cout << "house number : " << h1.house_no << endl;
	    cout << "house name : " << h1.house_name << endl;
	    cout << "number of rooms in house : " << h1.no_of_rooms << endl;
	    cout << "number of kichen in house : " << h1.no_of_kichen << endl;
	    cout << "number of hall in house : " << h1.no_of_hall << endl;
	    cout << "number of balcony in house : " << h1.no_of_balcony << endl;
	    cout << "number of washroom in house : " << h1.no_of_washroom << endl;
    
        cout << endl << endl;
	    
	    for(i=0;i<5;i++)
	    {
	    	cout << "Enter room number : ";
	    	cin >> r[i].room_no;
	    	cout << "Enter room persons : ";
	    	cin >> r[i].room_persons;
	    	cout << "Enter room name : ";
	    	cin >> r[i].room_name;
	    	cout << "Enter number of bed : ";
	    	cin >> r[i].no_of_bed;
	    	cout << "Enter number of sofa : ";
	    	cin >> r[i].no_of_sofa;
	    	cout << "Enter number of washroom : ";
	    	cin >> r[i].no_of_washroom;
	    	cout << "Enter number of TV : ";
	    	cin >> r[i].no_of_TV;
	    	cout << "Enter number of windows : ";
	    	cin >> r[i].no_of_windows;
	    	cout << "Enter number of cupboard : ";
	    	cin >> r[i].no_of_cupboard;
	    	cout << "Enter number of AC : ";
	    	cin >> r[i].no_of_AC;
	    	cout << "Enter number of fan : ";
	    	cin >> r[i].no_of_fan;
	    	cout << "Enter number of photoframe : ";
	    	cin >> r[i].no_of_photoframe;
	    	cout << "Enter number of lights : ";
	    	cin >> r[i].no_of_lights;
	    }
	    
	    cout << endl;
	    	
	    for(i=0;i<5;i++)
	    {
	    	cout << "room number : " << r[i].room_no << endl;
	    	cout << "room persons : " << r[i].room_persons << endl;
	    	cout << "room name : " << r[i].room_name << endl;
	    	cout << "number of bed : " << r[i].no_of_bed << endl;
	    	cout << "number of sofa : " << r[i].no_of_sofa << endl;
	    	cout << "number of washroom : " << r[i].no_of_washroom << endl;
	    	cout << "number of TV : " << r[i].no_of_TV << endl;
	    	cout << "number of windows : " << r[i].no_of_windows << endl;
	    	cout << "number of cupboard : " << r[i].no_of_cupboard << endl;
	    	cout << "number of AC : " << r[i].no_of_AC << endl;
	    	cout << "number of fan : " << r[i].no_of_fan << endl;
	    	cout << "number of photoframe : " << r[i].no_of_photoframe << endl;
	    	cout << "number of lights : " << r[i].no_of_lights << endl;
	    	
	    }
	    	
    return 0;
}
