//Racer Driver file
#include<string>
#include<array>
#include<iostream>
#include<iomanip>
using namespace std;

#include "Racer.h"

int main()
{
	string name;
	int category;
	Racer bikeRacer;
	
	cout << "Enter the Bike racer's name?: ";
	getline(cin, name);
	cout << "\nEnter the Bike racer's Category";
	cin >> category;

	bikeRacer.setRacerName(name);
	bikeRacer.setRacerCategory(category);
	
	bikeRacer.displayInfo();

	return 0;
} 

