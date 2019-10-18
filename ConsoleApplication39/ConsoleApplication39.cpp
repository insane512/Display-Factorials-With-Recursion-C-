// ConsoleApplication39.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int factor(int x)
{

	if (x == 1)
	{
		return 1;


	}
	
	else
	{
	return	x * factor(x - 1);
	}

}





int main()
{

	int y;
		cout << "Enter The factorial" << endl;
		cin >> y;
		
		cout << y << " = " << factor(y) << endl;




    
}


