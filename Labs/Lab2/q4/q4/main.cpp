#include <iostream> 
#include "LabEquipment.h" 
#include <vector>

using namespace std;

int main() {
    // Demonstrating use of LabEquipment::SetInfo
    /*LabEquipment Equipment1;
    Equipment1.SetInfo("DeskLight", 12, 6);
    
    Equipment1.DisplayInfo();*/
    
    // Demonstrating use of LabEquipmentList::GetListFromFile
    LabEquipmentList MyList;
    
    unsigned int NbEquipment;
    
    NbEquipment = MyList.GetListFromFile("EquipmentList.txt");
    
    cout << NbEquipment << " existing equipment loaded." << endl;
    
    if (NbEquipment !=0)
    {
        MyList.DisplayList();
    }
    
    MyList.AddEquipment();
    MyList.DisplayList();
    MyList.SaveToFile("EquipmentListAfter.txt");
    
	return 0;
	
}
