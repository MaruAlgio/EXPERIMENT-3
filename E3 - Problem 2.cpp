
// Experiment 3 - PROBLEM 2

//Create a C++  Program that store temperature of Province A, Province B and Province C for a week
//(seven days) and display it


#include<iostream>
#include<conio.h>
#include <string>

using namespace std;

string prov[3] = {"Province A", "Province B", "Province C"}; //Z
int day[10] = {1,2,3,4,5,6,7}; //Y

int main()
{

	int z, y, a, b;
	int temp[a][b];

	cout << "Enter the desired temperature for each province\nfor each day of the week: \n\n";
	
	for (z = 0; z <= 2; z++)
	{
		for (y = 0 ; y <= 6 ; y++)
		{
			
			cout << prov[z] << ", Day " << day[y] << ": ";
			cin >> temp[z][y];
		}
	}

	cout << "\n\nDisplaying the Values:\n\n";
	
	for (z = 0; z <= 3; z++)
	{
		for (y = 0 ; y <= 6 ; y++)
		{
			
			cout << prov[z] << ", Day " << day[y] << " = " << temp[z][y]<< endl;
			
		}
		
	}
	
	getch();
	return 0;
}
