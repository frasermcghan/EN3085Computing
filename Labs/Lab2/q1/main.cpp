#include <iostream> 
#include "LabEquipment.h" 
#include <vector>

using namespace std;

int main() {

	vector<LabEquipment> EquipmentList;
	
	LabEquipment Equipment;

	Equipment.LoadInfo();

	EquipmentList.push_back(Equipment);

	cout << "The following equipment has been added to the list:" << endl; 
	
	EquipmentList[0].DisplayInfo();
	
	return 0;
	
}
