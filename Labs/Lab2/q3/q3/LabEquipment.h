#ifndef LabEquipment_H
#define LabEquipment_H

#include <string>
#include <vector>
#include <fstream>

using namespace std;

class LabEquipment
{
	string Name;
	double Value;
	double Consumption;

	public:
	LabEquipment();
	void LoadInfo();
    string GetInfo();
	void DisplayInfo();
    void SaveToFile(ofstream&);
};

class LabEquipmentList
{
	vector<LabEquipment> List;
	
	public:
	void AddEquipment();
	void DisplayList();
    void SaveToFile(string);
};

#endif
