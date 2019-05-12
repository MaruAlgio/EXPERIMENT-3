
// Experiment 3 - PROBLEM 1

//Create a C++ program to show the smallest and largest integer, the total, and the average of an array
//that take 10 elements only.

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{
	int z, arr[9], max, min;
	double sum = 0;
	
	cout << setprecision(2) << fixed << showpoint;
	
	cout << "This Program takes 10 digits and outputs the smallest\nand largest integers, the total, and the mean.\n\n";
	
	cout << "Enter your 10 digits: ";
    for (z = 0; z < 10; z++)
    cin >> arr[z];
    
    max = arr[0];
    for (z = 0; z < 10; z++)
    {
        if (max < arr[z])
            max = arr[z];
    }
    min = arr[0];
    for (z = 0; z < 10; z++)
    {
        if (min > arr[z])
            min = arr[z];
    }
    
    
    for (z = 0; z < 10; z++)
   	 	{
        sum += arr[z];
    	}
    
	double ave = sum/10;	
    	
    	
    cout << "\nSum of all the array elements : " << sum;
    cout << "\nThe largest number of the array is: "<< max;
    cout << "\nThe smallest number of the array is: "<< min;
    cout << "\nThe Average/mean of the array is: " << ave;


	getch();
	return 0;
}
