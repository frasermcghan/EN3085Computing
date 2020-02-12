#include <iostream> 
#include "LabEquipment.h" 
#include <vector>

using namespace std;

int main() {
    // Demonstrating use of LabEquipment::SaveToFile
    /*LabEquipment Equipment1;
    ofstream OutputFile("Equipment1.txt");
    
    Equipment1.LoadInfo();
    Equipment1.SaveToFile(OutputFile);
    
    OutputFile.close();*/
    
    // Demonstrating use of LabEquipmentList::SaveToFile
    LabEquipmentList myList;
	
	myList.AddEquipment();
	myList.DisplayList();
    myList.SaveToFile("EquipmentList.txt");
    
	return 0;
	
}
