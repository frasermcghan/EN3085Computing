#include "LabEquipment.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

LabEquipment::LabEquipment()
{
    Name = "";
    Value = 0;
    Consumption = 0;
}

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

void LabEquipment::DisplayInfo() 
{
	cout << Name << ", " << Value << " Pounds, " << Consumption << "KWh" << endl;
}

string LabEquipment::GetInfo()
{
    string info = Name + ", " + to_string(Value) + ", " + to_string(Consumption);
    return info;
}

void LabEquipment::SaveToFile(ofstream& OutputFile)
{
    OutputFile << GetInfo() << endl;
}




void LabEquipmentList::AddEquipment()
{
	string answer;
	
	while (answer != "n")
	{
		cout << "Do you want to add a piece of equipment?" << endl;	
		cin >> answer;

		if (answer == "n")
		{
			break;
		}

		LabEquipment Equipment;

		Equipment.LoadInfo();

		List.push_back(Equipment);
	}
}

void LabEquipmentList::DisplayList()
{
	if (List.size() != 0)
	{
		cout <<  List.size() << " pieces of equipment in list." << endl;
		
		for (int i=0; i < List.size(); i++)
		{
			List[i].DisplayInfo();
		}
	}
}

void LabEquipmentList::SaveToFile(string FileName)
{
    ofstream OutputFile(FileName);
    
    for (int i=0; i<List.size(); i++)
    {
        OutputFile << List[i].GetInfo() << endl;
    }
    
    OutputFile.close();
}
