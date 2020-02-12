#ifndef LabEquipment_H
#define LabEquipment_H

#include <string>

using namespace std;

class LabEquipment
{
	string Name;
	double Value;
	double Consumption;

	public:
	LabEquipment();
	void LoadInfo();
	void DisplayInfo();
							
};

#endif
