#ifndef LabEquipment_H
#define LabEquipment_H

#include <string>
#include <vector>

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

class LabEquipmentList
{
	vector<LabEquipment> List;
	
	public:
	void AddEquipment();
	void DisplayList();	
};

#endif
