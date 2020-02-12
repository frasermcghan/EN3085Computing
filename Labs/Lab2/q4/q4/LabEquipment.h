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
    void SaveToFile(ofstream& OutputFile);
    void SetInfo(string NewName, double NewValue, double NewConsumption);

};

class LabEquipmentList
{
	vector<LabEquipment> List;
	
	public:
	void AddEquipment();
	void DisplayList();
    void SaveToFile(string FileName);
    unsigned int GetListFromFile(string FileName);
};

#endif
