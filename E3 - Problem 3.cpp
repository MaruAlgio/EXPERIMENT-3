
// Experiment 3 - PROBLEM 3

//Create a C++ program which prints the letters in a char array in reverse order and shows the size of the array

#include <iostream>
#include <conio.h>
#include<string.h>

using namespace std;

int main ()
{
	
	int y, x, k;
	char input[30];
	char output[30];
	
	//cout << "How many characters do you want to input? ";
	//cin >> k;
	
	cout << "Enter any word, numbers, or combination of characters: ";
	cin >> input;
	
	int a = strlen(input);
	
	//cout << a ;
	
	for (y = 0, x = a ; y <= a ; y++, x--)
    	{
        	 output[x] = input [y];
    	}
    	
    for (y=0 ; y<= a ; y++)
    {
        cout << output[y];
    }
    
    cout << "\n\nThe size of array is: "<< a;
    
	getch ();
	return 0;	
}
