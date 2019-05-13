
// Experiment 3 - PROBLEM 3

//Create a C++ program which prints the letters in a char array in reverse order and shows the size of the array

#include <iostream>
#include <conio.h>
#include<string.h>

#include <iostream>
#include <conio.h>
#include<string.h>
#include <algorithm>
using namespace std;

int main()
{
	int i,j,n;
	int temp;
	char c[101];
	
	
	
	cout << "Enter any word, numbers, or combination of characters: ";
	cin >> c;
	
	int a = strlen(c);
	//cout << a;
	
/*	for (i=0; i<=a; i++)
		for (j=i; j<=a ; j++)
			if (c[i] > c[j]);
				{
				//swap(c[i],c[j]);
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
				}
*/

	sort(c+i, c+a+1);
	
	for (i=0; i<= a ; i++)
		cout << c[i] << " ";
		
	getch();
	return 0;
	
	
}

	
	
