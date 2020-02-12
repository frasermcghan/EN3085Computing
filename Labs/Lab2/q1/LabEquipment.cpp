#include "LabEquipment.h"
#include <iostream>
using namespace std;

void LabEquipment::LoadInfo()
{
	double wattage, hours;
	cout << "What is the name of the new equipment? ";
	cin >> Name;
	cout << "What is its current value? ";
	cin >> Value;
	cout << "What is its wattage? ";
	cin >> wattage;
	cout << "What is its daily usage in hours? ";
	cin >> hours;
	Consumption = wattage * hours / 1000;				
}

void LabEquipment::DisplayInfo() {
	cout << Name << ", " << Value << " Pounds, " << Consumption << "KWh" << endl;
		
}

LabEquipment::LabEquipment() {
		Name = "";
			Value = 0;
				Consumption = 0;
				
}
